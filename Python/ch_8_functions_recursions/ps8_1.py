#greatest of three numbers

def great(a,b,c):
    if(a>b and a>c):
        return a
    elif(b>a and b>c):
        return b
    elif(c>a and c>b):
        return c
    
print(f"Greatest : {great(14,55,6)}")