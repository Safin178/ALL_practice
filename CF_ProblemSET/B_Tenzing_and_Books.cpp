#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
   int n ,x, u=0, r;
   cin >> n >> x;

   int a[3][n];
   int i, j;

   for(i = 0 ; i  < 3; i++)
   {
    for(j = 0; j < n;j++ )
    {
        cin >> a[i][j];
    }
   }

    
   for(i = 0 ; i  < 3; i++)
   {
        for(j = 0; j < n;j++ )
        {
            r = (u | a[i][j]);
           if(a[i][j] < x)
           {
                u = r;
           }
           if(u == x)
           {
                cout << "Yes\n";
                return;
           }


        }
   }
   cout << "No\n";






}
int main(){
    int t=1;
    cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}