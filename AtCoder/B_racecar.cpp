#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sz(n) (int)(n).size()

int is_palindrome(string s)
{
    int n = sz(s);
    int i;
    for(i = 0 ; i < n/2;i++ )
    {
        if(s[i] != s[n-1-i])
        {
            return 0;
        }

    }
  
    return 1;
}

void solve()
{
    int n, i, j;
    cin >> n;
    string x;
    string s[n+1];
    for( i = 1; i <= n; i++)
    {
        cin >> s[i];
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == j) continue;
            x = s[i] + s[j];
            if(is_palindrome(x) == 1)
            {
                cout << "Yes";
                return;
            }
        }
    }


    cout<<"No";

}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}