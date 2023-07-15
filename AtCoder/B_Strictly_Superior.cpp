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
    ll int n, m;
    cin >> n >> m;
   ll int p[n+1];
    ll int c[n+1];
   ll  int fun[100][m+1];
    ll int freq[105][105]= {0};

    bool con1 = true, con2 = true , con3 = true;
    for(int i = 1; i <= n; i++)
    {
        cin >> p[i] >> c[i] ;
        for(int j = 1; j <= c[i] ; j++)
        {
            cin >> fun[i][j];
            freq[i][fun[i][j]]++;
            
        }
        cout << endll;
    }
     for(int i = 1; i < n; i++)
    {
        con1 = false, con2 = false , con3 = true;
        for(int j = 1; j <= c[i] ; j++)
        {
           if( p[i] >= p[j])con1 = true;
           if(p[i] > p[j] || c[i] > c[j] ) con3 = true;

           for(int k = 1 ; k <= c[j] ; k++)
           {
                
                if(freq[i][fun[j][k]] == 0){ con2 = false;break;}
           }
            
        }
        if(con1 == true && con2 == true && con3 == true)
        {
            cout << "Yes\n";
            return;
        }
    
    }

    cout << "No\n";






}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}