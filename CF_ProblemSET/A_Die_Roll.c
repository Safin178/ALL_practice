#include<stdio.h>

int gcd( int x,int y)
{
    int rem;
    
    while(rem != 0)
    {
        rem = x % y;
        x = y;
        y = rem;
    }
    //euclide bhai er sotro hoito




    return x;
}
int main()
{
    /*
    
    
    */
    // int a , b, ans;
    // scanf("%d%d",&a, &b );

    // if(a>= b)
    // {
    //     ans = 6 - a +1;
    // }
    // else{
    //     ans = 6 - b + 1;
    // }
    // printf("%d/%d", ans/gcd(ans,6), 6/gcd(ans,6));
    int p = 6/gcd(5,6);
    int d = gcd(6,5) ;
    printf("%d/%d",d,p);

    return 0;
}