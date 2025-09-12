"""PIP FREEZE COMMAND  
‘pip freeze’ returns all the package installed in a given python environment along with 
the versions. """

#pip freeze > requirements .txt 

"""The above command creates a file named ‘requirements.txt’ in the same directory 
containing the output of ‘pip freeze’. 
We can distribute this file to other users, and they can recreate the same environment 
using: """

#pip install –r requirements.txt 