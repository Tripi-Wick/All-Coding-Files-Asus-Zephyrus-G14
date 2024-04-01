import pandas as pd
iris = pd.read_csv("https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data")

print(type(iris))
print("\n")

df=iris.copy()

print(df)
print("\n")
