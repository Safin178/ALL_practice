#include<stdio.h>
int main()
{
    /*
    similar like sp22 - 1d(or)//
    
    */
    int n ; 
    scanf("%d", &n);
    int i , f  = 0;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            f = 1;
            break ;
        }
    }
    if( f == 0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}