#class attributes vs object/instance attributes

class Project:
    lang="Python"
    company="CWH"

harry = Project()          #object 1 - harry

harry.lang="Javascript"
print("Language : ",harry.lang)  #here instance attributes overrides the class attributes