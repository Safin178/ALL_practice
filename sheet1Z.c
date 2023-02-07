#include<stdio.h>
#include<math.h>
int main()
{
     long long int a ,b,c,d,x,y;

    scanf("%lld%lld%lld%lld" , &a,&b,&c,&d);

    x = pow(a,b);

     y = pow(c, d);
    if(logx > y)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}


