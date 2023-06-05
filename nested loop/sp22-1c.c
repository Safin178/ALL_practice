#include<stdio.h>
int main()
{
   int n;
   int i , j;
   scanf("%d", &n);
   for(i = 0; i < n-1;i++)
   {
    for( j = 0 ; j <= i; j++)// j<= i eta important naile bhul hoise 
    {
        printf("*");
    }
    printf("\n");
   }
    /*eto tok code 3 input dile *
                                ** printkore


       */     
    for(i = 0 ; i < n; i++)
    {
        for( j = n-i; j  >0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    /*eto tok code 3 input dile ***
                                **
                                * printkore


       */  
      //last e
        /*
            3
            *
            **
            ***
            **
            *
       */   


    return 0;
}
