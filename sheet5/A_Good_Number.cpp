#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a,cnt=0;
    cin >> n >> m;
    while(n--)
   {
       string st;
       cin >> st;
       sort(st.begin(),st.end());
       int ln=(int)st.size();
       int f = 0;
       if(m >= ln)f=1;
       else
       {
            for(int i=0;i<= m;i++)
            { 
                 if(i != (st[i] - '0'))
                    {
                        f =1;break;
                    }
            }
       }
        
         if(f == 0)cnt++;
   // cout << st << endl;
   }
    cout<<cnt<<endl;
}