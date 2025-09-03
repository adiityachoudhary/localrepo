#factorial of a given no.

n= 5
fact=1
for i in range(1,n+1):
    fact*=i

print(f"factorial of {n} : {fact}")