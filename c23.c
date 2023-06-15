#include<stdio.h>

 int main()
 {
       int n,fib,a,b,i=1;

         printf("enter teh number");
         scanf("%d",&n);
         

        a=0;
        b=1;

           while(i<=n)
           {
                    printf("%d\t",a);
               fib=a+b;
               a=b;
               b=fib;
             i++;
       

           }
       



 }

