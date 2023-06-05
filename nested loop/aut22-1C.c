#include<stdio.h>
int main()
{

    int a, b, sum = 0;
    int temp, i;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }// swap kore disi , loop coto theke boro te colar jonno
    for(i = a; i <= b; i++)
    {
        if(i % 2 != 0)
        {
            if(i % 3 == 0 || i % 5 == 0)
            {
                sum = sum + i;
            }
        }
    }
    printf("Sum of all integers in the range is %d\n", sum);
    return 0 ;
}
