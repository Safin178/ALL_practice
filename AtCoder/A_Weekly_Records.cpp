#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(n) (int)(n).size()
void solve()
{
    ll int n;
    cin >> n;
    ll int sum = 0, x;
    for(int i = 1 ; i <= 7*n;i++)
    {
        cin >> x;
        sum += x;
        if(i % 7 ==0)
        {
            cout <<sum <<" ";
            sum = 0;
        }
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