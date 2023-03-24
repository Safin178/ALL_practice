#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n, i, j;
    char x[10];
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        scanf("%s", x);
        int cnt=0;
        for(j = 0; j<3;j++)
        {
            if(x[j] != x[j+1])
            {
                cnt++;
            }
        }
        if(cnt != 0)
        printf("%d\n", cnt+1);
        else{
            printf("-1\n");
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}