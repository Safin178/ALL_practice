#include<stdio.h>

int MON(int x , int y)
{
    if(x > y)
    {
        return x;
    }
    else 
    {
        return y;
    }

    
}


int main()
{
    int a;
    a = MON(10 , 7);



    printf("%d",a  );

    return 0;
}
