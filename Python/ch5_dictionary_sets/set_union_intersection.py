# Union and Intersection in set

s1={1,45,6}
s2={7,8,1,78,45}

# UNION
#combine all the elements from both set s1 and s2 and returns it
# NO REPETITION
u=s1.union(s2)  
print(u)

# INTERSECTION
#return common elements from both set s1 and s2
i=s1.intersection(s2) 
print(i)


print(s1-s2) #removes all the s2 elements that are present in s1
print(s2-s1) #removes all the s1 elements that are present in s2