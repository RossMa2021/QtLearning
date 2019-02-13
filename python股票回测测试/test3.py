#!/usr/bin/python
# coding: UTF-8
 
"""This script parse stock info"""
 
import tushare as ts
 
def parse(code_list):
    '''process stock'''
    is_buy    = 0
    buy_val   = []
    buy_date  = []
    sell_val  = []
    sell_date = []
    df = ts.get_hist_data(STOCK)
    ma20 = df[u'ma20']
    close = df[u'close']
    rate = 1.0
    idx = len(ma20)
 
    while idx > 0:
        idx -= 1
        close_val = close[idx]
        ma20_val = ma20[idx]
        if close_val > ma20_val:
                if is_buy == 0:
                        is_buy = 1
                        buy_val.append(close_val)
                        buy_date.append(close.keys()[idx])
        elif close_val < ma20_val:
                if is_buy == 1:
                        is_buy = 0
                        sell_val.append(close_val)
                        sell_date.append(close.keys()[idx])
 
    print(STOCK)
    print(len(buy_val))
    print(len(sell_val))
 
    for i in range(len(sell_val)):
        rate = rate * (sell_val[i] * (1 - 0.002) / buy_val[i])
        print(buy_date[i], buy_val[i])
        print(sell_date[i], sell_val[i])    
 
    print("rate: %.2f" % rate)
 
if __name__ == '__main__':
    STOCK = '600000'       ##浦发银行
    parse(STOCK)


##主要就是调 parse 这个函数，这个函数就会从数据中读 20 日线的值和当日收盘价做对比，如果当日收盘价比20日线值高且之前没有买入，那就买入。
##如果当日收盘价比20日线值低且之前已经买入，那就卖出。