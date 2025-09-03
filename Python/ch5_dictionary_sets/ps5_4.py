#find length of set s

s=set()

s.add(20)
s.add(20.0)  #this will be considered as 20 since set holds unique values the size will be 2
s.add('20')


print(s)
print(len(s))