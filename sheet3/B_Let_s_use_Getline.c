#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>

void solve(void)
{
    char s[1000000]; // note eikane range buji nai but boro dorte hobe,
    int i;
    gets(s);
    for(i = 0; s[i] != '\\'; i++)  // \\ doiber dite hobe && er moto
    {
        printf("%c", s[i]);
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