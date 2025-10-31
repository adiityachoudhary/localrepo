import matplotlib.pyplot as plt

x = [1,2,3,4,5]
y = [1, 40, 19 , 160, 25 ]

plt.plot(x,y, linewidth= 1, marker='*', color='green')
plt.title("Square numbers", fontsize=14)
plt.xlabel("Value", fontsize=14)
plt.ylabel("Square", fontsize=14)
plt.grid(True)

# plt.savefig("matplot_plot1.png")

plt.show