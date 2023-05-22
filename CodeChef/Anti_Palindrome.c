#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n, i;
    scanf("%d ", &n);
    char s[n];
    int f[26] = {0};
    scanf("%s", s);
    for(i =0 ;i < n; i++)
    {
        f[s[i] - 'a']++;
    }
    int sum = 0;
    for(i = 0; i <26; i++)
    {
        if(f[i]>1)
        {
            sum += (f[i] - 1);
        }
    }
    printf("%d\n", sum);



    
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