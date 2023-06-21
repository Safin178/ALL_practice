#include<bits/stdc++.h>
using namespace std;

int main() 
{
  /*

  */
   int t;
   cin >> t;
   while(t--)
   {
        int n, a= 0, b=0, ab =0, o= 0;
        cin >> n;
        string s[n];
        for(int i = 0 ; i < n; i++)
        {
            cin >> s[i];
            if(s[i] == "A")a++;
            else if(s[i] == "B")b++;
            else if(s[i] == "O")o++;
            else ab++;
        }
        int ans = 0;
        ans = o;
        if(ab > 0)
        {
            ans += ab;
        }
        if(a > 0 && a >= b) ans+= a;
        else ans+= b;

        printf("%d\n", ans);






   }
  
   

    

    

    

  
   return 0;
}