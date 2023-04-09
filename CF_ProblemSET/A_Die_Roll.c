#include<stdio.h>
int main()
{
    /*
    
    
    */
    int a , b, ans;
    scanf("%d%d",&a, &b );

    if(a>= b)
    {
        ans = 6 - a +1;
    }
    else{
        ans = 6 - b + 1;
    }
    if(ans == 0)
    {
        printf("0/1");
        return 0;
    }
    printf("1/%d", 6 / ans);

    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}