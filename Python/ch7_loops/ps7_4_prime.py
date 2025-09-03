#check prime

n=17

c=0

for i in range(1,n):
     if (n % i == 0):
        c+=1

prime=c<=2

if(prime):
    print(f"{n} is prime no.")
else:
    print(f"{n} is NOT a prime no.")
