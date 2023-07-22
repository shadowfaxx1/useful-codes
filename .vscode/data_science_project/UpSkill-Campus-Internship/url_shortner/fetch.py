import csv

DATA_FILE = "url_shortener.csv"

def view_data():
    with open(DATA_FILE, 'r', newline='') as csvfile:
        csvreader = csv.reader(csvfile)
        for row in csvreader:
            print(f"Short URL: {row[0]} -> Long URL: {row[1]}")

if __name__ == "__main__":
    view_data()
