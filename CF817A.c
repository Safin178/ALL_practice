#include<stdio.h>
#include<string.h>
int main()
{
    //https://codeforces.com/contest/1722/problem/A
   long long  int n, x,i, t, l, j;
   scanf("%lld", &t);
   for(l = 0 ; l < t; l++)
   {
     scanf("%lld", &n);
    char s[n];
    scanf(" %s", s);
    j = strlen(s);
    for(i = 0, x=0  ; i < n ; i++)
    {
        x += s[i];
    }
    if(x == 529 && j == 5)
    {
        printf("YES\n");
    }
    else 
    {
        printf("NO\n");
    }
   }



    return 0;
}
