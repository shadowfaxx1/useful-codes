class emp:
    r=2.2
    co=0
    def __init__(self,name,last,pay):
        self.name=name
        self.last=last
        self.pay=pay
        emp.co+=1

    def full(self):
        return '{} {}'.format(self.name,self.last)

    def raises(self):
        self.pay=int(self.pay*self.r)
    def email(self):
        return '{}{}@gmail.com'.format(self.name,self.last)
    @classmethod
    def raiseam(cls,am):
         cls.r=am
    @staticmethod
    def is_work(day):
        if day.weekday()==5 or day.weekday()==6:
            return False
        return True    





import datetime

date=datetime.date(2021,11,13)

print('{}  was a workday ?{}'.format(date.strftime("%A"),emp.is_work(date)))
print(emp.raiseam(date))
(print(5/2))