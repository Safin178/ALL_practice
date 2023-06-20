#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int i = 0;
void rec(char x[], int n)
{
    i = n;
    if(i == 0){
        printf("%c",x[n]);
        return;
    }

    rec(x, i-1);
    printf("%c ", x[i]);
}




void solve(void)
{
    char x[20];
    scanf("%d", &x);
    int n = strlen(x);
    rec(x , n-1);
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