#include<stdio.h>
int main()
{
    /*
    in >2
        5
        6
        3
        7
        -1
        out > 4.50 
    
    
    */
    int x, i = 0, sum = 0;
    double avg;
    for(;;)//i++ eikane o dite partam
    {
        scanf("%d", &x);
        if(x < 0)
        {
            break;
        }
        if(x % 3 == 0 || x % 5 == 0)
        {
            continue;
        }
        i++;
        sum += x;
    }
    printf("%.2lf", sum / (double)i);
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}