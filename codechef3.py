import sys
import math
x=int(input())
z=x
budget=[]
for i in range(x):
    budget.append(int(input()))

ans=-sys.maxsize-1
price=0
budget.sort()
cou=1
for i in range(x):
    c=(x-i)
    if(ans<c*budget[i]):
        pr=budget[i]
        ans=c*budget[i]

for i in budget:
    if(i>pr):
        cou=cou+1
   
print(pr*cou)        







''' 
z=len(budget)
mid=math.floor(z/2)
print(budget[mid])
print(budget)
c=0
for i in budget:
    if(i<budget[mid]):
        c=c+1

print(budget[mid]*(x-c))
'''
