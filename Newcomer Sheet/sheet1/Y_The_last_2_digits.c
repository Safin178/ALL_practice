#include<stdio.h>
int main()
{
    /*
    
    
    */
        long long a, b, c, d;
    scanf("%lld%lld %lld%lld", &a, &b, &c, &d);

    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;
    long long ans = (a * b * c * d)%100;
    if(ans <10)
    {
        printf("0%d\n", ans);
        return 0;
    }
    printf("%lld\n",ans);

 
    
    
    
    
    
    
    
    
    
    return 0;
}