#sum of n natural number using recursion
# sum(1)=1
# sum(2)=1+2
# sum(3)=1+2+3
# sum(4)=1+2+3+4
# sum(5)=1+2+3+4+5
# sum(n)=1+2+3+4+........(n-1) + n


def n_sum(a):
    if(a==1):
        return 1
    return n_sum(a-1)+a 

print(n_sum(10))