#sort marks 

marks=[]

for i in range(0,6):
    marks.append(int(input(f'Enter marks of Student {i+1} : ')))

marks.sort()
print(marks)