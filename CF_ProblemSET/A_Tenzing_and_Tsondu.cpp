#include<bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
    ll int n , m;
    cin >> n >> m;

    ll int a[n], b[m];
    ll int sum = 0 , sum2= 0;

    for(ll int i = 0; i < n;  i++)
    {
        cin >> a[i];
        sum += a[i];
    }

     for(ll int i = 0; i < m;  i++)
    {
        cin >> b[i];
        sum2 += b[i];
    }
    if(sum == sum2)cout<<"Draw\n";
    else if(sum > sum2) cout<<"Tsondu\n";
    else cout << "Tenzing\n";







}
int main(){
    int t=1;
    cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}