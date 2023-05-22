#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    int n;
    scanf("%d ", &n);
    char s[n];
    int  f[26] ={0};
    scanf("%s", s);
    int i, max = INT_MIN;
    for(i = 0; i< n; i++)
    {
        f[s[i]-'a']++;
        if(max < (s[i]-'a'))
        {
            max = s[i]- 'a';
        }

    }
    int sum = 0;
    for(i = 0; i <= max; i++)
    {
        if(f[i] % 2 == 0)
        {
            sum +=1;
        }
        else
        {
            sum += (f[i] / 2)+1;
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