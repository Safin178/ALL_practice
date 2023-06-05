#include<stdio.h>
int main()
{
    /*
    
    
    */
   int i = 100;
   for( i = 100; i > 0; i--)
   {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
   }

   //while loop
   while(i >0)
   {
    if( i % 2 == 0)
    {
        printf("%d\n", i);
        i--;
    }
   }
   //sesh 
   //do while loop
   do{
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i--;

   }while (i > 0);

    //sesh 
    
    
    
    
    
    
    
    
    return 0;
}