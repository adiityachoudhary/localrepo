# Indian Railways system
# Color codes you can try
# \033[91m → Red, \033[92m → Green, \033[93m → Yellow, \033[94m → Blue, 
# \033[95m → Magenta, \033[96m → Cyan, \033[0m → Reset to default

from random import randint
pnr=randint(22222222,33333333)  #random PNR no.
fare=randint(999,3333)          #random Train fare

class Train:

    def __init__(self, train_no):   #constructor 
        self.train_no=train_no
    
    def book_ticket(self, fro, to):
        print(f"Your ticket has been booked with PNR no. : {pnr} from {fro} to {to} successfully")

    def get_status(self):
        print(f"{self.train_no} is running on time")

    def get_fare(self,fro, to):
        print(f"Fare for {fro} to {to} is {fare}")

t=Train(12324) #object created and passed a parameter as train_no
t.get_fare("Patna", "Howrah") 
t.book_ticket("Patna", "Howrah")
t.get_status()
