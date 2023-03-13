#include<stdio.h>
int main()
{
    /*
    
    
    */
    int t ;
    scanf("%d", &t);
    for(int l = 0 ; l < t; l++)
    {
        int n, x1= 0 , x2= 0;
        scanf("%d", &n);
        char a[n], b[n];
        scanf("%s %s", a, b);
        int f = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] != b[i])
                {
                    f = 1;
                    
                }
            if(a[i] == 'R')
            {
                x1++;
            }
            if(b[i] == 'R') {x2++;}
        }
        if((x1 == x2)||(f == 0)){ printf("YES\n");}
        else {printf("NO\n");}
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}