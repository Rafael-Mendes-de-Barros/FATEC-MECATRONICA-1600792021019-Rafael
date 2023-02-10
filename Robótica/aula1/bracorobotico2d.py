import matplotlib.pyplot as plt
import math

l1 = int(input("L1 : "))
l2 = int(input("L2 : "))
angulo = int(input("Angulo : "))
beta = int(input("Beta : "))
h = int(input("H : "))

radiano = (angulo*math.pi)/180
y0 = l1 + h
x0 = 0

x1 = math.cos(radiano)*l2

y1 = (math.sin(radiano)*l2)+y0

print("Radiano" , radiano)
print("X1 :" , x1)
print("Y1 :" , y1)

# x  = [0,5,10]
# y1 = [0,5,5]
# y2 = [0,3,10]

# plt.plot(x, y1, label = "linha1")
# plt.plot(x, y2, label = "linha2")

# plt.xlabel("X")
# plt.ylabel("Y")
# plt.legend()
# plt.show()

posx = [0,x0,x1]
posy = [0,y0,y1]

plt.xlim(-5,5)
plt.ylim(0,5)

plt.plot(posx, posy, label = "linha1")

plt.title("Braço Robótico")
plt.xlabel("X")
plt.ylabel("Y")
plt.legend()
plt.grid(True)

plt.show()
