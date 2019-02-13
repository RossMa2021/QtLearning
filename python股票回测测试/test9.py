import tushare as ts
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import talib

df=ts.get_hist_data('601328',start='2015-01-01',end='2015-12-31')
df=df.sort_index()
df.index=pd.to_datetime(df.index,format='%Y-%m-%d')
close = df.close
# 6日的强度指标、24日的强度指标
df['RSI_6'] = talib.RSI(np.array(close), timeperiod=6)
df['RSI_24'] = talib.RSI(np.array(close), timeperiod=24)

#买卖信号
#6日的超买和超卖
sig1=[]
for i in df.RSI_6:
    if i>80:
        sig1.append(1)
    elif i<20:
        sig1.append(-1)
    else:
        sig1.append(0)

df['sig1']=sig1
df.RSI_6[7]
#交易信号2：黄金交叉与死亡交叉
sig2=pd.Series(0,index=df.index)
lagrsi6=df.RSI_6.shift(1)
lagrsi24=df.RSI_24.shift(1)
for i in range(0,len(lagrsi6)):
    if (df.RSI_6[i]>df.RSI_24[i])&(lagrsi6[i]<lagrsi24[i]):
        sig2[i]=1
    elif (df.RSI_6[i]<df.RSI_24[i])&(lagrsi6[i]>lagrsi24[i]):
        sig2[i]=-1

df['sig2']=sig2     
#合并交易信号
signal=sig1+sig2
signal[signal>=1]=1
signal[signal<=-1]=-1
signal=signal.dropna()

df['signal']=signal

#买卖信号出现一天后交易
tradSig=signal.shift(1)
ret=df.p_change/100
#求买入交易收益率
ret=ret[tradSig.index]

buy=tradSig[tradSig==1]
buyRet=ret[tradSig==1]*buy

#求卖出交易收益率

sell=tradSig[tradSig==-1]
sellRet=ret[tradSig==-1]*sell

#求出买卖交易合并收益率
tradeRet =ret*tradSig
#收益累计
cumStock=np.cumprod(1+ret)-1
cumTrade=np.cumprod(1+tradeRet)-1

plt.rcParams['font.sans-serif']=['SimHei']

plt.subplot(211)
plt.plot(cumStock)
plt.ylabel('cumStock')
plt.title('股票本身收益')

plt.subplot(212)
plt.plot(cumTrade)
plt.ylabel('cumTrade')
plt.title('策略收益')
