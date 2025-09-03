#grades
#90-100 : Ex
#80-90 : A
#70-80 : B
#60-70 : C
#50-60 : D
#<50 : F

marks=75

if (marks<=100 and marks>=90):
    grade="Ex"
elif (marks>=80):
    grade="A"
elif (marks>=70):
    grade="B"
elif (marks>=60):
    grade="C"
elif (marks>=50):
    grade="D"
else:
    grade="F"

print(f"Your Grade : {grade}")