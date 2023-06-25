#include<bits/stdc++.h>
using namespace std;

#define ll long long
void average(double a[], int n)
{
    int i;
    double sum= 0.0 ;
    for( i = 0 ; i < n; i++)
    {
        sum += a[i];
    }
    printf("%.7lf", sum / n);
    //cout << (sum / n);

}


void solve()
{
    int n;
     cin >> n;
     double a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];

     average(a, n);
   


}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}