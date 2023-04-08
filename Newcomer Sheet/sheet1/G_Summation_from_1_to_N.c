#include<stdio.h>
int main()
{

     long long a;
    scanf("%lld", &a);

     a = (a * (a + 1)) / 2;
    printf("%lld\n", a);



    return 0;
}