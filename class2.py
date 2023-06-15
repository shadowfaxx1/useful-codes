class private:
    def __init__(self,name,last):
        self.name=name
        self.last=last
        
    @property 
    def email(self):
      return f'{self.name}{self.last}.email.com'
    @property
    def full(self):
      return f'{self.name} {self.last}'
    @full.setter #declaring setter by using name as the property so it will perform
    def full(self,name): # it takes self and name which we want to change 
     name,last=name.split(' ')
     self.name=name
     self.last=last
    @full.deleter
    def full(self):
        self.name=None
        self.last=None
        print("deleted")

emp=private('kaif','khan')
print(emp.full)
print(emp.email)
emp.full='mini khan'
print(emp.full)
print(emp.email)
del emp.full
print(emp.full)
print(emp.email)