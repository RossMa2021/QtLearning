# -*- coding: utf-8 -*-
"""
Created on Wed Oct 18 18:03:57 2017

@author: Administrator
"""
import pandas as pd
import numpy as np
import sys
import movingAverage as ma
import tushare as ts
import pandas as pd
import matplotlib.pyplot as plt

#移动均线
def smaCal(tsPrice,k):
    Sma=pd.Series(0.0,index=tsPrice.index)
    for i in range(k-1,len(tsPrice)):
        Sma[i]=sum(tsPrice[(i-k+1):(i+1)])/k
    return(Sma)
#权重移动均线
def wmaCal(tsPrice,weight):
    k=len(weight)
    arrWeight=np.array(weight)
    Wma=pd.Series(0,index=tsPrice.index)
    for i in range(k-1,len(tsPrice.index)):
        Wma[i]=sum(arrWeight*tsPrice[(i-k+1):(i+1)])
    return(Wma)
#指数移动均线
def ewmaCal(tsPrice,period=5,exponential=0.2):
    Ewma=pd.Series(0.0,index=tsPrice.index)
    Ewma[period-1]=np.mean(tsPrice[:period])
    for i in range(period,len(tsPrice)):
        Ewma[i]=exponential*tsPrice[i]+(1-exponential)*Ewma[i-1]
    return(Ewma)


my_data2=ts.get_k_data('600600')
my_data2.index=my_data2.iloc[:,0]
my_data2.index=pd.to_datetime(my_data2.index,format='%Y-%m-%d')
sf_close=my_data2.close
ewma10=ma.ewmaCal(sf_close,10,0.2)
ax5=plt.subplot()
plt.plot(ewma10['2016'])
