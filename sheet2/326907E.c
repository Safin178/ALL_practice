#include<stdio.h>
int main()
{
    /*
    
    
    */
    long long int x, row , col;
    scanf("%lld", &x);

    row = (x / 4);
    if(row % 2 != 0)
    {
        col = (x % 4) +1;
    }
    else{
        col = x % 4;
    }
    printf("%lld %lld", row, col);
    
    
    
    
    
    
    
    
    return 0;
}