#include<stdio.h>
int main()
{
    /*
    
    
    */
        int n,m,i, ans = 0;
        scanf("%d%d", &n , &m);
        int s[n], t[m];
    
        for(i = 0; i< n;i++)
        {
            scanf("%d", &s[i]);
            s[i] = s[i] % 1000;
             
        }       
    
  int j, f;
        for(i = 0; i< m;i++)
        {
            scanf("%d", &t[i]);
            for(j = 0,f = 0; j < n;j++)
                {
                    if(s[j] == t[i])
                          {
                             f = 1;
                             break;
                           }
                }
             if(f == 1) ans++;
        
        }     
        printf("%d\n", ans);
    
    
    
    
    
    return 0;
}