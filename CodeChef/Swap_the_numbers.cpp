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
    int n , k;
    cin >> n >> k;
    vi v(n);

     forcin(v);
    if(k == n){printVec(v); return;}
    int p = v[k-1];
    sort(v.begin(), v.end());
    remove(v.begin(),v.end(), p);

    v.insert(v.begin()+k-1,p);
    v.resize(n);

    
     printVec(v);



    // k--;
    
    // for( int i = 0 ; i < sz(v) ; i++)
    // {
    //     for(int  j = 0 ; j < sz(v) ; j++)
    //     {
    //         if((int)abs(i-j) >= k)
    //         {
    //             if(v[i] < v[j])
    //             {
    //                 int t = v[i];
    //                 v[i] = v[j];
    //                 v[j] = t;
    //             }
    //         }
    //     }
    // }
    // printVec(v);



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}