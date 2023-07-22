import pandas as pd
import os 

# df=pd.read_excel(r"datafile(2).csv")

# for i in df:
#     print(i) 
# current_directory = os.getcwd()
# print("Current working directory:", current_directory)

# files_in_directory = os.listdir(current_directory)/
# print("Files in the directory:", files_in_directory)
with open(r"C:\Users\kaifk\lpth\.vscode\data_science_project\datasets\Project4_Ag.zip\datafile4.csv", 'r') as file:
    x = file.read()
    print(x)

import os

