# cook your dish here
from ast import Break


x=int(input())
for i in range(x):
    z=int(input())
    num=z*3
    if(num%2==0):
        x1=1
        x2=(num/2)-1
        x3=(num/2)
    else:
        x1=1
        x2=(num/2)-1
        x3=(num/2)+1
    print(x1,x2,x3)
        
               
                  
            