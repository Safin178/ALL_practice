#include<bits/stdc++.h>
using namespace std;
#define sz(n) (int)(n).size()
#define ll long long
void solve()
{
    string s;
    cin >> s;
    int a[26];

    for(int i = 0 ; i < 26; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    int x,y;
    for(int i = 0 ; i < sz(s)-1; i++)
    {
        x = s[i]-'a';
        y = s[i+1]-'a';
        if(s[i] >= 'a' && s[i] <= 'z')
             sum += (int)abs(a[x] -a[y]);
    }
    cout << sum ;







}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}