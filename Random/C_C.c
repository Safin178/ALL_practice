#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>



void solve(void)
{
    

    long long r=1;
    long long a, i = 58;
    scanf("%lld", &a);
   for(i = 0; r <= a ; i++)
   {
     r = r*2;
    
   }
   printf("%lld\n", i-1);

    



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