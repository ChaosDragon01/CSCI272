import csv

def login_verification(name, email):
    with open('users.csv', 'r') as f:
        reader = csv.reader(f)
        for row in reader:
            if row[0] == name and row[1] == email:
                return True
    return False
