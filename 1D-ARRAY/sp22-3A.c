#include<stdio.h>
int main()
{
    /*
    
    
    */
    int arr[20] = {1,4,3,2,5,6};
    int ans[20]; //cumulative sum gula store korar jonno
    
    int sum = 0, i;

    for(i = 0; i<6;i++)
    {
        sum = sum + arr[i];
        ans[i] = sum;
    }
    for(i = 0 ; i < 6 ; i++)
    {
        printf("%d ", ans[i]);
    }
    /*
    Not important :
    eikane 2 ta loop na ekn 1 ta loop diye
    
    for(i = 0; i<6;i++)
    {
        sum = sum + arr[i];
        ans[i] = sum;
        printf("%d ", ans[i]);

    }
    
    
    */
    
    
    
    
    
    
    
    return 0;
}