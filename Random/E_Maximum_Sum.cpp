#include<bits/stdc++.h>

using namespace std;
int main() 
{
  /*

  */
   int a , b, c;

   int k;
   scanf("%d%d%d%d", &a, &b, &c, &k);

   int ans = max(a, max(b, c));
  int j = ans*2*k;
   int f = a+b+c+j-ans;

   printf("%d", f);

  
   

    

    

    

  
   return 0;
}