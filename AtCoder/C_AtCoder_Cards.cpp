#include<bits/stdc++.h>
#include<string.h>

using namespace std;
int main() 
{
  /*

  */
     string a, b;
    scanf("%s", a);
    scanf("%s", b);
    int l=strlen(a);
    int i , j;
    for(i = 0; i < l; i++)
    {
        if((a[i] == 'a') ||(a[i] == 't') ||(a[i] == 'c') ||(a[i] == 'o')||(a[i] == 'd')||(a[i] == 'e')||(a[i] == 'r'))
        {
            a[i]= '@';
        }
          if((b[i] == 'a') ||(b[i] == 't') ||(b[i] == 'c') ||(b[i] == 'o')||(b[i] == 'd')||(b[i] == 'e')||(b[i] == 'r'))
        {
            b[i]= '@';
        }
    
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = strcmp(a, b);
    if(ans == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

  
   

    

    

    

  
   return 0;
}