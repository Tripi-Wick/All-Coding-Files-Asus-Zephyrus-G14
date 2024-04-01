from matplotlib import pyplot
from sklearn.metrics import mean_squared_error
expected = [1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0]
predicted = [1.0,0.9,0.8,0.7,0.6,0.5,0.4,0.3,0.2,0.1,0.0]

errors = list()
for i in range(len(expected)):
    err = (expected[i]-predicted[i])**2
    errors.append(err)
    print('>%.1f,')

    