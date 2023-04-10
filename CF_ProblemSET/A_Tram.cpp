#include<bits/stdc++.h>

using namespace std;
int main() 
{
  /*

  */
   int t;
   scanf("%d", &t);
  int a , b, ans = 0, cap = 0;
   for(int i = 0; i< t; i++)
   {
      scanf("%d%d", &a, &b);
      ans = ans - a + b;
      cap = max(ans,cap);

   }
   printf("%d", cap);
  
   

    

    

    

  
   return 0;
}