#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n, cnt=0, i;
    scanf("%d", &n);
    int arr[n+1];
    arr[0] = 0;
    for(i = 1 ; i <= n ; i++)
    {
        arr[i] = 0;
    }
    
    for(i = 1 ; i <= n ; i++)
    {
        
        scanf("%d",&arr[i]);
        int x = arr[i];
        if(arr[x] != 1)
        {
            arr[x] = 1;

        }
        
    }
    for(i = 1 ; i <= n ; i++)
    {
       
        if(arr[i] != 1)
        {
            cnt++;
        }
        
    }
    printf("%d\n", cnt);
    for(i = 1 ; i <= n ; i++)
    {
       
       if (arr[i] != 1)
            printf("%d ", i);
       
        
    }
    


    
    
    
    
    
    
    
    
    
    
    
    return 0;
}