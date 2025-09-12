"""1. Create two virtual environments, install few packages in the first one. How do you 
create a similar environment in the second one?

Step1: Terminal commands 
    ->pip install virtualenv 
    ->virtualenv env1
    ->virtualenv env2

Step2: To activate the virtual environment: .\env1\Scripts\activate.ps1
    ->pip install pyjokes etc

Step3: TO save the packages installed in the virtual environment in a file
    ->pip freeze > requirements.txt

Step4: deactivate the first environment
    ->deactivate

    activate the second environment
    ->.\env2\Scripts\activate.ps1

Step5: Copy the file in the new environment folder. 
        to install the same packages in the second virtual environment as evnv1
    -> pip install -r requirements.txt

Step6: To deactivate virtual environment
    -> deactivate
    """