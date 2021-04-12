import pylab as plt
import numpy as np

def a(num):
    res1 = 1
    for i in range(1,num+1):
        res1 *= i*2
    return res1
def b(num):
    res = []
    for x in range(1,100):
        for i in range(1,num+1):
            res.append(((-1)**i)*(x**2*i)/a(i))
    return res
a = np.array(range(1,100))
plt.plot(a,np.array(b(0)),'r')
plt.plot(a,np.array(b(1)),'g')
plt.plot(a,np.array(b(2)),'b')
plt.show()