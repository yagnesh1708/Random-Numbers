import numpy as np
import matplotlib.pyplot as plt

x=np.linspace(-3,3,50)

prob=int(1e6)

y=[]

randvar=np.loadtxt("uni.dat",dtype='double')

for i in range(0,50):
    y_ind=np.nonzero(randvar < x[i])
    y_len=np.size(y_ind)
    y.append(y_len/prob)

z=[]

for i in range(0,50):
    if (x[i]<=0):
         z.append(0) 
    if (x[i]>=1):
           z.append(1)
    if(0<x[i]<1):
             z.append(x[i])

plt.scatter(x,z,color='red',)
plt.plot(x,y,color='green',)
plt.grid()
plt.xlabel('$x$')
plt.ylabel('$F_X(x)$')
plt.legend(['theoretical','practical'])
plt.savefig('uni_cdf.pdf')
plt.savefig('uni_cdf.eps')


