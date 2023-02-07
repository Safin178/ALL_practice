#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*

    */
     int a,i;
    scanf("%d", &a);
    long long int m[a],ans = 0;
    for(i = 0; i < a ; i++)
    {
        scanf("%lld", &m[i]);
        ans += m[i];
    }
    ans = abs(ans);
    printf("%lld", ans);
    return 0;
}

