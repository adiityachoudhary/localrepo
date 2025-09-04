
#enter 8 digits and print unique digits

s=set()

for i in range(0,8):
    s.add(input(f"Enter digit at {i+1} : "))

print(s)