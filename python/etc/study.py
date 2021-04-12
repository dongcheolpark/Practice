import math
import numpy as np
import matplotlib.pyplot as plt

def func_cos(x, n):
    res = 0
    for i in range(n):
        a = (-1)**i
        b = x**(2*i)
        c = math.factorial(2*i)
        res += ( a ) * ( (b)/(c) )
    return res

angles = np.arange(-2*np.pi,2*np.pi,0.1)
p_cos = np.cos(angles)
fig, ax = plt.subplots()
ax.plot(angles,p_cos)

for i in range(1,6):
    t_cos = [func_cos(angle,i) for angle in angles]
    ax.plot(angles,t_cos)
plt.ylim(-7,5)

plt.show()