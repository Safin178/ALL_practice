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

int dis(vi v2)
{
   
    int x[1005]={};
    int y[1005]={};

    for(int i = 0 ; i < sz(v2); i++)
    {
        if(v2[i] < 0) y[(-1*v2[i])]++;
        else
        x[v2[i]]++;
    }
    int cnt = 0;
    for( int i = 0; i <= 1005 ; i++)
    {
        if(x[i] != 0) cnt++;
         if(y[i] != 0) cnt++;

    }
    return cnt-1;
}

void solve()
{
    int n;
    cin >> n;
    vi v(n);

    
    forcin(v);

    cout << dis(v) << endll;



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}