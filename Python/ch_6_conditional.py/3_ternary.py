"""1. Python Ternary Operator (Conditional Expression)
Syntax:
value_if_true if condition else value_if_false
Readability note: Python’s ternary is written in natural language order:
“return this if condition else that”.

2. C++ Ternary Operator (?: Operator)
Syntax:
condition ? value_if_true : value_if_false
"""

# find max
a=5
b=10
greatest= a if a>b else b  #in C++ (a>b?a:b)
print("greatest no. :", greatest)