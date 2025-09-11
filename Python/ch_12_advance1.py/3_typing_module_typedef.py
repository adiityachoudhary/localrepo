"""Python's typing module provides more advanced type hints, such as List, Tuple, Dict, 
and Union. 

You can import List, Tuple and Dict types from the typing module like this: 

from typing import List, Tuple, Dict, Union

These annotations help in making the code self-documenting and allow developers to 
understand the data structures used at a glance."""


from typing import List, Tuple, Dict, Union

l1 : List[int] = [1,2,3,4,5]
t1 : Tuple[str, int] = ("Harry",26)
d1 : Dict[str, int] = {"haris" : 700002, "harry" : 123123}
u1 : Union[str, int] = {"ID123"}

u1 = {54321}  #also valid

print(type(u1))
print(u1)
