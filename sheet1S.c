#include<stdio.h>
int main()
{
    double  x;
    scanf("%lf",&x);
    if ((x < 0) || (x > 100))
    {
        printf("Out of Intervals\n");
    }
     else if(x <=25 )
    {
        printf("Interval [0,25]\n");
    }
     else if(x <=50 )
    {
        printf("Interval (25,50]\n");
    }
    else if(x <=75 )
    {
        printf("Interval (50,75]\n");
    }
    else if(x <=100 )
    {
        printf("Interval (75,100]\n");
    }
    return 0;
}


