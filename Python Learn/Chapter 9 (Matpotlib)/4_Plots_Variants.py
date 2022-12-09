import matplotlib.pyplot as plt
import numpy as np
import pandas as pd


# Setting Grids
x=np.array([1,2,3,4,5])
y=np.array([2,6,76,32,21])
plt.plot(x,y)
plt.grid(True)
plt.show()

# To set scale
x=np.array([1,2,3,4,5])
y=np.array([2,6,76,32,21])
plt.xscale('linear')
plt.yscale('log')
plt.plot(x,y)
plt.show()


# To Make pie Graph
labels='India','us','UK','Germany'
sizes=[38,32,20,10] #How much should be the size of pie
explode=(0.1,0,0,0) #How much it should divide form others
plt.pie(sizes,explode=explode, labels=labels, autopct='%1.1f%%',shadow=True,startangle=90)
# autopct = in which you wanna show percentage or decimal.
# startangle for length of shadow
plt.axis('equal')
plt.show()

# To Make  a Histogram
mu=100
sigma=15
x=mu+sigma*np.random.rand(1000)
plt.xlabel('Smart graphs')
plt.ylabel('Probabilities')
plt.axis([100,120,0,0.1])
plt.grid(True)
n,bins,patches=plt.hist(x,50,density=1,facecolor='orange',alpha=0.80)
plt.show()