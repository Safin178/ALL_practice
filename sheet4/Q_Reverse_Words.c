#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    
char str[10000] ;

gets(str);
int len = strlen(str);
int i, j= 1;
for(i = 0; i <= len; i++)
{
     
     
    j++;
    int ans = i;
    if(str[i] == ' ')
    {
        while((j-1) != 0)
        {
            printf("%c", str[ans-1]);
            j--;
            ans--;
        }
        
    } 
    
     if(str[i] == 0)
        {
            while((j-1) != 0)
            {
                printf("%c", str[ans-1]);
                j--;
                ans--;
            }
            
        } 
        


    

    
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