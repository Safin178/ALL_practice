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
    int n , k , x, jog = 1;
    cin >> n >> k >> x;
    if(k == x && x != n)
    {
        
    }

    int m = n % k;//1
    int sum = n /k;
    if(m != x)
    {
        cout << "YES\n";
        if(m == 0)jog=0;
        cout << k+m <<endll;
        
        for(int i = 0 ;  i < (k+m); i++)
        {
            cout << sum << " ";
        }
        if(m != 0) 
         {cout << m;}
        cout << endll;
       
    }
    else
    cout << "NO" << endll;



}
void solve2()
{

    int n , k ,x;
    cin >> n >> k >> x;
     if(x != 1)
     {
        cout << "YES\n" << n <<endll;
        
        for(int i = 0; i < n ; i++)
        {
            cout << 1 << " ";
        }
        cout << endll;
     }
    else{
        if(k == 1){CNR}
        else 
        {
            if(n%2 == 0 && k == 2)
            {
                cout << "YES\n" <<endll;
                cout << (n/2) << endll;
                for(int i = 0 ; i < (n/2) ; i++)
                {
                    cout << 2 << " ";
                }
                cout << endll;
            }
            else if(k == 2 && n % 2 != 0){CNR}
            else if(k >= 3 && n % 2 != 0)
            {
                cout << "YES\n" <<endll;
                cout << (n%2)+1<<endll << 3<<" ";
                 for(int i = 0 ; i < (n/2) ; i++)
                {
                    cout << 2 << " ";
                }
                cout << endll;

            }
            else if(k >= 3 && n % 2 == 0)
            {
                cout << "YES\n" <<endll;
                cout << (n/2) << endll;
                for(int i = 0 ; i < (n/2) ; i++)
                {
                    cout << 2 << " ";
                }
                cout << endll;
            }
            
           

            
        }
    }






}
int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve2();
    }
    return 0;
}