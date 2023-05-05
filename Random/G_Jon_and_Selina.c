#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
   char s[10000];
    int al[26]={0};
    int k ,i;
   scanf("%s", s);

   int len = strlen(s);
   for(int i = 0; i < len; i++)
   {
        k = s[i] - 'a';
        al[k]++;
   }
   for(i = 0 ; i  < len; i++)
   {
    if(al[i] % 2 != 0)
    {
        printf("%c\n", i+'a');
        return;
    }
   }
   printf("-1\n");



    
}

int main()
{
    int t = 1;
    scanf("%d", &t);   // remove '//' for test case
    
    while(t--)
    {
        solve();
    }
    return 0;
}