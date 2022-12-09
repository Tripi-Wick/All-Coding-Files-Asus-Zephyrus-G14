import matplotlib.pyplot as plt
import numpy as np
import pandas as pd


# Setting Titles
x=np.array([1,2,3,4,5])
y=np.array([2,6,76,32,21])
plt.plot(x,y)
plt.ylabel("Random Values")
plt.xlabel("Random Values")
plt.title("Plotting a random graph")
plt.show()

# Setting axis
x=np.array([1,2,3,4,5])
y=np.array([2,6,76,32,21])
plt.plot(x,y)
plt.ylabel("Random Values")
plt.xlabel("Random Values")
plt.title("Plotting a random graph")
plt.axis([0,6,0,20])
plt.show()