#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdint.h>

 void insertion_sort_reversed(int ar[],int n){

      int i ,j;
      int a ;


    for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (ar[i] < ar[j]) 
                {
                    a = ar[i];
                    ar[i] = ar[j];
                    ar[j] = a;
                }
            }
        }
     
 }


void selection_sort(int ar[], int n){
   int i ,j;
  
   int min ;
   int temp;

   for(i=0;i<n;i++){
        min = i;
        for(j=i+1;j<n;j++)
        if(ar[min]>ar[j])
            min=j;
      temp =ar[min];
      ar[min]=ar[i];
      ar[i]=temp;

   }
}

void bubble_sort(int ar[],int n )
{
    int i ,j;
  
   int temp;
   for(i=0;i<n-1;i++)
   {
     for(j=0;j<n-i-1;j++)
     {
       if(ar[j]>ar[j+1])

      {
         temp=ar[j];
       ar[j]=ar[j+1];
        ar[j+1]=temp;
      }

     }
   }

}

void insertion_sort(int ar[], int n )
{
     int i ,j;
      int key,k ;
    
       

    for(k=0;k<1;k++)
    {           
      for(i=1;  <n;i++)
      {
          key=ar[i];
           j=i-1;
           while(j>=0 && ar[j] >key )
           {
               ar[j+1]=ar[j];
               j--;

           }
         ar[j+1]=key;

      }
    }

      

}

void test_bubble()
{
     int i,j ;
     int n=10000;
     int ar[n];
     int k;
    int time_ar[10];
     int d ;
        printf("average cases in bubble sort time complexity \n ");
        printf("for list n = 10000 totally random\n ");

     for(i=0;i<10;i++)
     {   
         for(j=0;j<n;j++)
         {
             ar[j]=(1+rand()%100000);

         }
        clock_t start ,end,elapsed;
        start =clock();
         bubble_sort(ar,n);
         end=clock();
         

         printf("sec= %.7g \n",(double )(end-start)/(double )CLOCKS_PER_SEC);

     }  
        printf("best cases in bubble sort time complexity \n ");
        printf("for list n = 10000 totally random\n ");
     for(i=0;i<10;i++)
     {   
         for(j=0;j<n;j++)
         {
             ar[j]=(1+rand()%100000);

         }
         
         insertion_sort(ar,n);

        clock_t start ,end,elapsed;
        start =clock();
         bubble_sort(ar,n);
         end=clock();
         

         printf("sec= %.7g \n",(double )(end-start)/(double )CLOCKS_PER_SEC);

     }  
    
   printf("worst cases in bubble sort time complexity  || reversed list \n ");
     for(i=0;i<10;i++)
     {   
         for(j=0;j<n;j++)
         {
             ar[j]=(1+rand()%100000);

         }
         
         insertion_sort_reversed(ar,n);

        clock_t start ,end,elapsed;
        start =clock();
         bubble_sort(ar,n);
         end=clock();


         

         printf("sec= %g \n",(double )(end-start)/(double )CLOCKS_PER_SEC);

     }  
     
    
}

void test_insertion()
{
    int i,j ;
     int n=10000;
     int ar[n];
     int k;
    int time_ar[10];
     int d ;
        printf("average cases in insertion sort time complexity \n ");
        printf("for list n = 10000 totally random\n ");

       

     for(i=0;i<10;i++)
     {   
         for(j=0;j<n;j++)
         {
             ar[j]=(1+rand()%100000);

         }
        clock_t start ,end,elapsed;
        start =clock();
         insertion_sort(ar,n);
         end=clock();
         

         printf("sec= %.7g \n",(double )(end-start)/(double )CLOCKS_PER_SEC);

     }  
        printf("best cases in insertion sort time complexity \n ");
        printf("for list n = 10000 totally random\n ");
     for(i=0;i<10;i++)
     {   
         for(j=0;j<n;j++)
         {
             ar[j]=(1+rand()%100000);

         }
         
         insertion_sort(ar,n);

        clock_t start ,end,elapsed;
        start =clock();
         insertion_sort(ar,n);
         end=clock();
         

         printf("sec= %.7g \n",(double )(end-start)/(double )CLOCKS_PER_SEC);

     }  
    
   printf("worst cases in insertion sort time complexity  || reversed list \n ");
     for(i=0;i<10;i++)
     {   
         for(j=0;j<n;j++)
         {
             ar[j]=(1+rand()%100000);

         }
         
         insertion_sort_reversed(ar,n);

        clock_t start ,end,elapsed;
        start =clock();
         insertion_sort(ar,n);
         end=clock();


         

         printf("sec= %g \n",(double )(end-start)/(double )CLOCKS_PER_SEC);

     }  

}

void test_selection()
{
    int i,j ;
     int n=10000;
     int ar[n];
     int k;
    int time_ar[10];
     int d ;
        printf("average cases in selection sort time complexity \n ");
        printf("for list n = 10000 totally random\n ");

     for(i=0;i<10;i++)
     {   
         for(j=0;j<n;j++)
         {
             ar[j]=(1+rand()%100000);

         }
        clock_t start ,end,elapsed;
        start =clock();
         selection_sort(ar,n);
         end=clock();
         

         printf("sec= %.7g \n",(double )(end-start)/(double )CLOCKS_PER_SEC);

     }  
        printf("best cases in selection sort time complexity \n ");
        printf("for list n = 10000 totally random\n ");
     for(i=0;i<10;i++)
     {   
         for(j=0;j<n;j++)
         {
             ar[j]=(1+rand()%100000);

         }
         
         insertion_sort(ar,n);

        clock_t start ,end,elapsed;
        start =clock();
         selection_sort(ar,n);
         end=clock();
         

         printf("sec= %.7g \n",(double )(end-start)/(double )CLOCKS_PER_SEC);

     }  
    
   printf("worst cases in selection sort time complexity  || reversed list \n ");
     for(i=0;i<10;i++)
     {   
         for(j=0;j<n;j++)
         {
             ar[j]=(1+rand()%100000);

         }
         
         insertion_sort_reversed(ar,n);

        clock_t start ,end,elapsed;
        start =clock();
         selection_sort(ar,n);
         end=clock();


         

         printf("sec= %g \n",( double )(end-start)/(double )CLOCKS_PER_SEC);

     }  
}


int main()
{
    test_bubble();
    test_insertion();
    test_selection();

}