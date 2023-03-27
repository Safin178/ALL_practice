#include<stdio.h>
#include<string.h>
int main()
{
    /*
    https://atcoder.jp/contests/abc276/tasks/abc276_a
    
    
    */
   char m[105];
   int i , pos = 0, n;
   scanf("%s", m);
   n = strlen(m);

   for(i = 0; i < n;i++)
   {
        if(m[i] == 'a')
        {
            pos = i+1;
        }
   }
    if(pos == 0)
    {
        printf("-1");
    }
    else printf("%d", pos);
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}