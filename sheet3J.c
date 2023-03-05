#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n, a, i, cnt;
    scanf("%d", &n);
    int ar[n] , s = 1000000;
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d", &ar[i]) ;
        if(ar[i] < s)
        {
            s = ar[i];
        }

    }

    for(i = 0, cnt = 0 ; i < n ; i++)
    {
        
        if(ar[i] == s)
        {
            cnt++;
        }

    }
   if(cnt % 2 == 0) {printf("Unlucky");}   
   else{printf("Lucky");}      
    
    
    
    
    
    
    
    
    
    return 0;
}