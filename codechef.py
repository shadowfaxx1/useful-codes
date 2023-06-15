def lead(z,x,y):
  
    l1=[]
    l2=[]
    for i,j in zip(x,y):
      
        if i>j:
           
            l=i-j
            l1.append(l)
        if j>i:
           
            m=j-i
            l2.append(m)

   
    max=l1[0]
    max1=l2[0]
    for i,j, in zip(l1,l2):
        if(max<i):
            max=i
        if(max1<j):
            max1=j 
    if(max>max1):
        print(1, max)      
    else:
        print(1, max1) 

x=int(input())
score1=[]
score2=[]
for i in range(x):
    inp,mop=x = map(int, input().split(" "))
    score1.append(inp)
    score2.append(mop)
lead(x,score1,score2)

