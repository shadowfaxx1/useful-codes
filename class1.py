class remote:
    def __init__(self,name,last):
        self.name=name
        self.last=name
        
    def email(self):
        return f'{self.name}{self.last}@gmail.com'

for i in range(3):
    i=remote(input("name"),input("last name"))

for i in range(3):
    print(i.name)
    print(i.email)