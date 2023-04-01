#include<stdio.h>
int main()
{
    /*
    
    
    */
     int t, a, b, c, i;
     int ev = 0; int  od = 0;
    scanf("%d", &t);
    while(t--)
    {
        ev
        scanf("%d%d%d", &a, &b, &c);
        for(i = 1 ; i <= a; i++)
        {
            if(i % 2 == 0)
            {
                ev++;
            }
            else od++;
        }
        int x  = (ev * c) + (od * b);
       printf("%d\n", x);
       
        
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}