#include<stdio.h>
int main()
{
    /*
    
    
    */
    int t ;
    scanf("%d", &t);
    for(int l = 0 ; l < t; l++)
    {
        int n;
        scanf("%d", &n);
        char a[n], b[n];
        scanf("%s %s", a, b);
        int f = 0;
        for(int i = 0; i < n; i++)
        {
            if((a[i] == 'R') || (b[i] == 'R'))
            {
                if(a[i] != b[i])
                {
                    f=1;
                    break;
                }
            }
        }
        if(f == 0) printf("YES\n");
        else printf("NO\n");
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}