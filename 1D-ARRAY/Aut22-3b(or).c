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
    int f = 0; // flag
    for(i = 0; i < n - 1; i++)
    {
        if(arr[i] >= arr[i+1])
        {
            f = 1; // flag
            break;
        }
    }
    if(f==0)
    {
        printf("Strictly Increasing\n");
    }
    else
    {
        printf("Not Strictly Increasing\n");
    }
    return 0;
}
