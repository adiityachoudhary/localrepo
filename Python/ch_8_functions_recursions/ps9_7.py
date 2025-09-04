# strip the given word from list

l=["Harry","Python","C++","Javascript" ,"Typescript","script"]

def rem_word( l, s):
    n=[]
    for item in l:
        if not(item == s):
            n.append(item.strip(s))
    return n

word="script"
print(rem_word(l,word))