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
    for(;;)//for eibabe na diye while(1) dite parbo (ar ekta jinish ami for(;1;) eirokom na likheo code colce,kemne jani na)
    {
        scanf("%d", &x);
        if(x < 0)
        {
            break;
        }
        if(x % 3 == 0 || x % 5 == 0)
        {
            continue;//i++ upore likle continue er jonno o i++ hoye jabe , so jegula continue hobe na oigular jonnoi i++ korbo,,
        }
        i++;
        sum += x;
    }
    printf("%.2lf, %d, %d", sum / (double)i, sum, i);
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}