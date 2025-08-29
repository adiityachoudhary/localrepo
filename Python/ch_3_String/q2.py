import datetime

now=datetime.datetime.now()
today=datetime.date.today()
print(now)
print(today)


name=input('Enter your name : ')

letter=f'''\nDear, {name}
Subject- regarding leave
Date : {today}
How are you, I am fine!!'''

print(letter)