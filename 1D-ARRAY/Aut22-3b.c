#include<stdio.h>
int main()
{
    int n ;
    scanf("%d", &n);
    int i, x ;
    int arr[n];
    for(i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for(i = 0 ; i<n; i++)// boro gula print
    {
        if(arr[i] > x)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    for(i = 0 ; i<n; i++)//coto gula print
    {
        if(arr[i] <x)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
