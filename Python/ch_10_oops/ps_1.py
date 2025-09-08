# class programmer

class Programmer:
    company="Microsoft"

    def __init__(self):  #constructor auto called
        self.name=input("Enter your name : ")
        print(f"\tName : {self.name}")
        print(f"\tCompany : {self.company}")


harry=Programmer()
rohan=Programmer()
