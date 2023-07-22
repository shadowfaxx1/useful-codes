import pandas as pd
import os 
import matplotlib.pyplot as plt

os.environ['PATH']+=r"C:\Users\kaifk\lpth\.vscode"
# Load the data from "produce.csv" into a DataFrame
datafile1_path = r"C:\Users\kaifk\lpth\.vscode\data_science_project\datasets\Project4_Ag.zip\datafile4.csv"  
# Replace with the actual path to your data file
df_datafile1 = pd.read_csv(datafile1_path)

# Step 1: Overview of the data
print("Data Overview:")
print(df_datafile1.head())  # Display the first few rows of the DataFrame

# Step 2: Summary statistics
print("\nSummary Statistics:")
print(df_datafile1.describe())  # Generate summary statistics of numerical columns

# Step 3: Data types and missing values
print("\nData Types and Missing Values:")
print(df_datafile1.info())  # Get data types and count of non-null values in each column

# Step 4: Check for duplicates
print("\nDuplicate Rows:")
print(df_datafile1[df_datafile1.duplicated()])  # Display any duplicate rows, if present

# Step 5: Column-wise unique values
print("\nUnique Values in Each Column:")
for column in df_datafile1.columns:
    print(f"{column}: {df_datafile1[column].nunique()} unique value(s)")

# Step 6: Checking specific columns
# For example, to check the unique crops in the dataset:
print("\nUnique Crops:")
print(df_datafile1['Crop'].unique())

# Step 7: Data distribution and visualizations (optional)
# Depending on the size of the dataset, you may want to visualize data distributions
# and relationships between variables using libraries like matplotlib or seaborn.

# Example of data visualization:

# Visualize the distribution of production for the year 2006-07
plt.figure(figsize=(8, 6))
plt.histplot(data=df_datafile1, x='Production 2006-07', bins=20, kde=True)
plt.xlabel('Production 2006-07')
plt.title('Distribution of Production for the year 2006-07')
plt.show()
