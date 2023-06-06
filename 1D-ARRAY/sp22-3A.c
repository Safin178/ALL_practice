#include<stdio.h>
int main()
{
    /*
    
    
    */
    int arr[20] = {1,4,3,2,5,6};//age ami doita array niye felsilam ekn ektai
   
    
    int sum = 0, i;

    for(i = 0; i<6;i++)
    {
        sum = sum + arr[i];
        arr[i] = sum;
    }
    for(i = 0 ; i < 6 ; i++)
    {
        printf("%d ", arr[i]);
    }
    /*
    Not important :
    eikane 2 ta loop na ekn 1 ta loop diye
    
    for(i = 0; i<6;i++)
    {
        sum = sum + arr[i];
        arr[i] = sum;
        printf("%d ", arr[i]);

    }
    
    
    */
    
    
    
    
    
    
    
    return 0;
}