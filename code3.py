import math

hm=[1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048]


l1=[]
c=0
x=int(input())
for i in range(x):
    z=int(input())
    while(z>0):
     sq=math.floor(math.sqrt(z))-1
     c=c+1
     res=2**sq
     print(res)
     z=z-res


print(c)
    
    

        
    

     
                               
                           
                    
                                
                         
                              
                        

                         



           
  
           
   



            
    


