#arithmetic operators: +,-,/,*
#assignment operators: =,+=, -=, *=, /=
#comparison operators: >,<, >=, <=, ==, !=
#logical operators: AND, OR, NOT

# a and b is operands
# '+' is an operator

a=52
b=18
sum=a+b
print(sum)

#assignment operators
c=5
c+=6
d=10
result=c+d
print(result)


#comparison operator
e=5!=5
print(e)

#Logical operators
# and : both results must be true to get true
# or : if either of them is true then it is true
# not : reverses the result like True becomes False and False becomes True

print('Truth table\tand\tor\t')
print(f'0\t0\t{False and False}\t{False or False}')
print(f'0\t1\t{False and True}\t{False or True}')
print(f'1\t0\t{True and False}\t{True or False}')
print(f'1\t1\t{True and True}\t{True or True}')

print(not True) #reverses to False
print(not False) #reverses to True
