#include<stdio.h>
int main()
{
    /*
    https://codeforces.com/contest/791/problem/A

    */
    int a, b, i, j, ans;
     scanf("%d%d", &a, &b);
     for(i = a, j = b, ans = 0;1 ; i *= 3, ans++, j *= 2)
     {
         if(i > j)
         {
             printf("%d\n", ans);
             break;
         }


     }













    return 0;
}
