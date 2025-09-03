# spam comment checker
# in keyword
# or is a LOGICAL OPERATOR in which if any of the condition is true it return TRUE

p1="Make lot of money"
p2="buy now"
p3="subscribe this"
p4="click this"



message=input("Enter your comment : ")

if ((p1 in message) or (p2 in message) or (p3 in message) or (p4 in message)):
    print("SPAM DETECTED!!")
else:
    print(" NO SPAM DETECTED!!")
