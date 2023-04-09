#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i, j;
    scanf("%d", &n);
    char ch;
    int arr[26]= {0};
    for(i = 0; i < n; i++)
    {
        scanf(" %c ", &ch);
        arr[ch-97]++;
    }


    for(i = 0 ; i < 26 ; i++)
    {
       j = arr[i];
        while(j != 0)
         {
             printf("%c",i+97); 
             j--;
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