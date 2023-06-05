#include<stdio.h>
int main()
{

    //eta aut22-3b er prai similar kinto prosne output jebabe likse oibabe kemon jani ,
    /*
        ami ei babe output show korsi 
        5 4 2 4 
        7
    */
    int n ;
    scanf("%d", &n);
    int i, x ;
    int arr[n];
    for(i = 0; i< n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
     for(i = 0 ; i<n; i++)//coto gula print
    {
        if(arr[i] <x)
        {
            printf("%d ", arr[i]);
        }
    }
     printf("\n");
    for(i = 0 ; i<n; i++)// boro gula print
    {
        if(arr[i] > x)
        {
            printf("%d", arr[i]);
        }
    }
   
   
    return 0;
}
