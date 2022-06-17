class Solution:
    def firstElementKTime(self,  a, n, k):
        
        # code here
        dic={}
        for i in range(n):
            c=1
            for j in range(i+1,n):
                if(a[i]==a[j]):
                    c=c+1
                    dic[ar[i]]=c
            
                    
                    
        print()  
        print(dic)

ar=[1, 7, 4, 3, 4,8, 4,7,1,3,4]
ob=Solution()

n=len(ar)
k=2
ob.firstElementKTime(ar,n,k)
