from turtle import color
from matplotlib import colors
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd

#plotting 1D Graph
a=[7,9,5,4,2]
plt.plot(a)
plt.show()

#plotting 2D Graph
x=[2,5,7,6]
y=[12,34,44,78]
plt.plot(x,y)   #To Plot default line graph
plt.show()


#plotting 2D Graph
x=[2,5,7,6]
y=[12,34,44,78] 
plt.scatter(x,y)   #To Plot default dot graph
plt.show()

#plotting coloured graph
N=50
x=np.random.rand(N)
y=np.random.rand(N)
colors=np.random.rand(N)
area=np.pi * (15* np.random.rand(N))**2
plt.scatter(x,y,s=area,c=colors,alpha=0.5)
plt.show()


# 
m=10
b=5
x=np.array([1,8,23,34])
y=m*x+b
plt.plot(x,y)
plt.show()