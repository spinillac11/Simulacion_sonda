import numpy as np
import matplotlib.pylab as plt

data = np.genfromtxt("data.dat", delimiter = ",")

t =  data[:,0]
sx = data[:,1]
tx = data[:,2]
sy = data[:,3]
ty = data[:,4]

plt.figure()
plt.plot(t,tx,label="tx(t)")
plt.plot(t,ty,label="ty(t)")
plt.legend()
#plt.savefig("tx_ty.png")
plt.close()

plt.figure()
plt.plot(sx,sy,label="Sol y(x)")
plt.plot(tx,ty,label="Tierra y(x)")
#plt.ylim([0,10])
plt.legend()
plt.savefig("Sol_Tierra_yx.png")
plt.close()