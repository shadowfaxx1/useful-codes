import csv
import os
import os

project_folder = os.path.abspath(os.path.dirname(__file__))
print(project_folder)

class Database:
    def __init__(self):
        # Get the current working directory
        current_dir = os.getcwd()

        # Specify the path to the CSV file relative to the current directory
        self.file_path = os.path.join(project_folder, "url_shortener.csv")

    def create_table(self):
        # Check if the CSV file exists, and if not, create it with headers
        if not os.path.exists(self.file_path):
            with open(self.file_path, "w", newline="") as csvfile:
                fieldnames = ["short_url", "long_url"]
                writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
                writer.writeheader()

    def insert_mapping(self, short_url, long_url):
        with open(self.file_path, "a", newline="") as csvfile:
            fieldnames = ["short_url", "long_url"]
            writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
            writer.writerow({"short_url": short_url, "long_url": long_url})


    def retrieve_long_url(self, short_url):
        with open(self.file_path, "r") as csvfile:
            reader = csv.DictReader(csvfile)
            for row in reader:
                if row["short_url"] == short_url:
                    return row["long_url"]
        return None
    def get_all_mappings(self):
        mappings = []
        with open(self.file_path, "r") as csvfile:
            reader = csv.DictReader(csvfile)
            for row in reader:
                mappings.append({"short_url": row["short_url"], "long_url": row["long_url"]})
        return mappings[-5:][::-1]

