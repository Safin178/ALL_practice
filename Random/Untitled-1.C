#include<stdio.h>
int main()
{
    /*
    2 3 4 -1//input
    sum = 6
    avg = 3.00
    
    */
   int num, total= 0, sum = 0;
    for(; 1;)
    {
        scanf("%d", &num);
        if(num < 0)
        {
            break;
        }
        if(num == 3 || num == 5)
        {
            continue;
        }
        else
        {
            sum += num;
            total++;
        }

    }
    
    printf("sum = %d\navg = %.2lf\n", sum, (double)sum / total);
    
    
    
    
    
    
    
    
    
    return 0;
}