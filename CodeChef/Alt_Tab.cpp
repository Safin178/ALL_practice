#include<bits/stdc++.h>
using namespace std;

int main() 
{
  /*

  */
   int t=1;
  // cin >> t;
   while(t--)
   {
        int n, i= 0, k=0, j =0, o= 0;
        cin >> n;
        char s[n][47];
        for(int i = 0 ; i < n; i++)
        {
            scanf("%s", s[i]);
           
          // printf("%d\n", k);
        }
        for(i = 0 ; i < n-1; i++)
            for(j = i+1; j < n; j++)
                if(strcmp(s[i], s[j]) == 0)
                {
                    strcpy(s[i], "1");
                }
           for(i = n-1 ; i >=0 ;i--)
               {  k = strlen(s[i]);
                    if(k >= 2)
                    printf("%c%c", s[i][k-2],s[i][k-1]);
               }





   }
  
   

    

    

    

  
   return 0;
}