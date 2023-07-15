#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define endll '\n'
#define CY cout<<"YES\n";
#define CN cout<<"NO\n";
#define CYR cout<<"YES\n";return;
#define CNR cout<<"NO\n";return;
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}

void solve()
{
    long long x , y , z;
    cin >> x >> y >> z;
    ll a, b;
    if(((x*y) % z) == 0)
    {
        a = x *y;
        b = z;
    cout << a <<" " <<  b << endll;
        return;
    }
     else if(((x*z) % y) == 0)
    {
        a = x *z;
        b = y;
        cout << a <<" " <<  b << endll;
        return;
    }
    else if(((z*y) % x) == 0)
    {
        a = z *y;
        b = x;
        cout << a <<" " <<  b << endll;
        return;
    }
    cout << -1 << endll;


}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}