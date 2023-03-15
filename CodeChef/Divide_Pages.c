#include<stdio.h>
int main()
{
    /*
    
    
    */
    int t, c;
    scanf("%d", &t);
    for(c = 1 ; c <= t; c++)
    {
        int n, x, sum = 0;
        scanf("%d", &n);
        for(int i = 0 ; i< n ; i++)
        {
            scanf("%d", &x);
            sum += x;
        }
        if(sum %2 == 0) printf("YES\n");
        else printf("NO\n");
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}