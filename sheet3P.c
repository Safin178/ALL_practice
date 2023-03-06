#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n , i , f = 0 , cnt = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n; i++ )
    {
        scanf("%d", &arr[i]);
    }
    while(1)
    {
        for(i = 0 ; i < n ; i++)
        {
            if (arr[i] % 2 != 0)
            {
                f = 1;
                break;
            }
            else
            {
                arr[i] /= 2;
            }
        }
        if(f == 1)
        {
            break;
        }
        else {cnt++;}
    }
    printf("%d", cnt);

    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}