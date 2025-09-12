""" Run pip freeze for the system interpreter. Take the contents and create a similar 
virtualenv."""

"""Step1: Terminal commands 
    ->pip install virtualenv 
    ->virtualenv myproject

Step2: To activate the virtual environment: .\myproject\Scripts\activate.ps1
    ->pip install pyjokes, pandas, flask, pyjokes etc

Step3: To save the packages installed in the virtual environment in a file
    ->pip freeze > requirements.txt

Step4: Create another virtual environment doing the above steps and activate it
Step5: Copy the file in the new environment folder. 
        to install the same packages in the second virtual environment
    -> pip install -r requirements.txt

Step6: To deactivate virtual environment
    -> deactivate"""