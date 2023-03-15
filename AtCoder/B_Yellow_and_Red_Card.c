#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n ,event;
    scanf("%d%d", &n, &event);
    int arr[n+1] , x, y, i;
    for(i=1; i<= n+1; i++)
    {
        arr[i] = 0;
    }

    for(i = 1; i <= event; i++)
    {
        scanf("%d %d", &x, &y);
        if(x == 1)
        {
            arr[y]++;
        }
        else if(x == 2) 
        {
            arr[y] = 3;
        }
        else if ( x == 3)
        {
            if(arr[y] < 2 ) {printf("No\n");}
            else {printf("Yes\n");}
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}