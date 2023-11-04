import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import os

## some mizzou data... trying to see if i can find anything interesting. go tigers

df = pd.read_csv('/Users/nolanpestano/Documents/GitHub/CMP_SC1050/data_football/cfb_data.csv', index_col=0)
# print(df.head())

## attempt to get from url
url = "https://www.secsports.com/scores/football/missouri-tigers"
df_2 = pd.read_html(url)
print(df_2.head())