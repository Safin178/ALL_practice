#include<stdio.h>

int count_before_zero(int arr[], int n)
{
    int cnt = 0 , i ;
    for( i = 0 ; i < n; i++)
    {
        if(arr[i] == 0)
        {
            break;
        }
        cnt++;
    }
    return cnt;

}



int main()
{
    /*
    
    
    */
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans;
    ans = count_before_zero(arr, n);
    
    
    printf("%d", ans);
    
    
    
    
    
    
    
    
    return 0;
}