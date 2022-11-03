import numpy as np
import matplotlib.pylab as plt

data = np.genfromtxt("data.dat", delimiter = ",")

t =  data[:,0]
sx = data[:,1]
tx = data[:,2]
sy = data[:,3]
ty = data[:,4]

plt.figure()
plt.plot(t,sx,label="sx")
plt.plot(t,sy,label="sy")
plt.legend()
plt.savefig("sx_sy.png")
plt.close()