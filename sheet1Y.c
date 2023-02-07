#include<stdio.h>
#include<math.h>
int main()
{
   long long int b,v;

    double a,x,q,w,e,r;

    scanf("%lf%lf%lf%lf",&q,&w,&e,&r);
     x = q * w * e * r ;
    a = x / 100;
    b = x / 100;
    v = round((a - b) * 100);
    printf("%lld\n",v);

    return 0;
}

