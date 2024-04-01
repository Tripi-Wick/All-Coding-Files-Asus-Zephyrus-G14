from turtle import color
from matplotlib import markers
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from pyparsing import line

# Specific Color Graph
N=50
x=np.array([1,2,4,5])
y=np.array([23,12,45,32])

# plt.plot(x,y,color='orange',marker='o')  #Color is for color and Marker ia for points
plt.plot(x,y,'ro') #red color and o marker (to do above action together) 
plt.show()

# o   --- for only points 
# +   --- for + marker
# --  --- for doted line
# -   --- for connected line
# --d ---  for diamond markers
# k^: --- for umbrella triangular markers

# For setting width of line
plt.plot(x,y,'b--',linewidth=10)  
plt.show()
