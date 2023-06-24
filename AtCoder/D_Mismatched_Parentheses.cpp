#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
    
    int n;
    cin >> n;
    string s;

    cin >> s;

    int i, l , h, f = 0;

    for(i = 0 ; i < n; i++)
    {
       if(s[i] == '(' && f == 0)
       {
            l =i;
            f=1;
       }
       if(s[i] == ')')
       {
         h=i;
       }
    }
    
            for(i = 0 ; i < n; i++)
        {
            if(i >= l && i <= h)continue;

            cout <<s[i];
        }
    








}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}