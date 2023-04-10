#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() 
{
  /*

  */
    int n , m;
    scanf("%d%d", &n, &m);

    int x = 6 - max(n, m) + 1;
  
    
        printf("%d/%d",x/__gcd(x,6), 6/__gcd(x, 6) );
  
   

    

    

    

  
   return 0;
}