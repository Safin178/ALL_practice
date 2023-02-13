#include<stdio.h>
 int main()
 {
     /*

     */
     int i,a;
     scanf("%d", &a);
     for(i =1; i<= 10000; i++)
     {
         if(i % a == 2)
         {
             printf("%d\n", i);
         }
     }








     return 0;
 }
