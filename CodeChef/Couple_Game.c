#include<stdio.h>
int main()
{
    /*
    
    
    */
    int t, a, b;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &a, &b);
        if(a >= b)
        {
            printf("%d\n", a - b);

        }
        else
        printf("%d\n", b - a);
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}