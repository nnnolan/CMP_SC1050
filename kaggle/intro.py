import pandas as pd

df_melb = pd.read_csv('intro_to_ml/melb_data.csv')
print(df_melb.head())
print(df_melb.describe())