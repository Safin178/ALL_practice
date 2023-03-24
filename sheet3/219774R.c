#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n, i, j;
    scanf("%d", &n);
    int a[n] , b[n];
    for(i = 0 ; i <n ; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &b[i]);
    }
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < n ; j++)
        {
            if(a[i] == b[j])
            {
                a[i] = -1;
                b[j] = -1;
                break;
            }
        }
        if(a[i] != -1)
        {
            printf("no\n");
            return 0;//ar lagtese na program thanks to boot23
        }

    }
    printf("yes\n");
    return 0;
}