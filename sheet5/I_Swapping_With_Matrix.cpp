#include<bits/stdc++.h>
using namespace std;

#define ll long long

int a[503][503], n;
void swapcol(int x, int y)
{
    int t;
    for(int i = 0; i < n; i++)
    {
        t = a[x][i];
        a[x][i]= a[y][i];
        a[y][i] =t;
    }
}
void swaprow(int x, int y)
{
    int t;
    for(int i = 0; i < n; i++)
    {
        t = a[i][x];
        a[i][x]= a[i][y];
        a[i][y] =t;
    }
}



void solve()
{
    int  x, y;
    cin >> n >> x >> y;
    x--,y--;
    int i, j;
    

    for(i = 0; i < n; i++)
        for(j = 0; j < n ;j++)
            cin >> a[i][j];
        
        swaprow(x, y);
        swapcol(x, y);
       

     for(i = 0; i < n; i++)
        {for(j = 0; j < n ;j++)
            {cout<<  a[i][j]<<" ";}
            cout << endl;
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