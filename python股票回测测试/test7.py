import matplotlib

import tushare as ts

import pandas as pd

import matplotlib.pyplot as plt

fig=plt.gcf()

df=ts.get_hist_data('000001',start='2015-11-01',end='2015-12-31')

with pd.plotting.plot_params.use('x_compat',True):
    df.high.plot(color='r',figsize=(10,4),grid='on')
    df.low.plot(color='b',figsize=(10,4),grid='on')
    fig.savefig('C:\\Python')
