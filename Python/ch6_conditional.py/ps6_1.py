a=[]
for i in range(0,4):
    a.append(int(input("Enter no. : ")))

print(a)

# built in fuction max() min()
# print(max(a))
# print(min(a))


if (a[0]>a[1] and a[0]>a[2] and a[0]>a[3]):
    print("greatest no is : ", a[0])

elif(a[1]>a[0] and a[1]>a[2] and a[1]>a[3]):
    print("greatest no is : ", a[1])

elif (a[2]>a[0] and a[2]>a[1] and a[2]>a[3]):
    print("greatest no is : ", a[2])
else:
    print("greatest no is : ", a[3])
