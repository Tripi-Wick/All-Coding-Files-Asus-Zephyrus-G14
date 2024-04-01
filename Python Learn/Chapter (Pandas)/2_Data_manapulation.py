import pandas as pd
iris = pd.read_csv("https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data")

print(type(iris))
print("\n")

df=iris.copy()

print(df)
print("\n")


# to show specific number of columns of beginning (default 5 columns)
print(df.head())
print("\n")

 
# to show specific number of columns of end (default 5 columns)
print(df.tail())  
print("\n")

# changing column names
df.columns=['sl','sw','pl','pw','flower_type']
print(df.columns)
print("\n")
print(df.head())
print("\n")

# to know to number of rows and columns
print(df.shape)
print("\n")


# to know to data type of each and column
print(df.dtypes)
print("\n")


# Method to know number of values under each thing (quick analysis)
print(df.describe())
print("\n")
print(df.describe(include="all"))  #To know every thing
print("\n")

# Method to know number of values under specific thing (column wise analysis)
print(df.sl.describe())
print("\n")
print(df.sl.describe(include="all"))  #To know every thing
print("\n")

# Method to know is null value present in data
print(df.isnull())
print("\n")
print(df.isnull().sum())   #To know answer in brief
print("\n")

# To slice data
print(df.iloc[2:9,:1:2])  #[columns : rows]
print("\n")

# To delete row
print(df.drop(0, inplace=True))    #inplace means transfer next row to that place
print("\n")


# To know index
print(df.index[0])  
print("\n")

# To find Data (used to find out range)
print(df.iloc[2])  
print("\n")

# To access a particular label(row) 
print(df.loc[2])  
print("\n")

# To insert new row (#must follow data type) 
df.loc[0]=[1,2,3,4,"Iris-setosa"]  
print(df.loc[0])  
print("\n")

# To delete column
print(df.drop('sl', axis=1, inplace=True))    #inplace means transfer next row to that place
print("\n")
print(df.head())
print("\n")

# To insert new column (#must follow data type) 
df['diff_pl_pw']=df['pl']-df['pw']  
print("\n")
print(df.head())
print("\n")