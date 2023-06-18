#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
        
    char s[100000] ;

    
    int len = strlen(s);
    int i, j=0;
   while (scanf("%s", s) != -1)
   {
        strrev(s);
        if(j == 0)
            printf("%s", s);
        else 
            printf(" %s", s);
        j =1;
        
   }
   

        
}

int main()
{
    int t = 1;
    //scanf("%d", &t);   // remove '//' for test case
    
    while(t--)
    {
        solve();
    }
    return 0;
}