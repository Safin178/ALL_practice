#include<stdio.h>
int main()
{
    int a;
    while(1)
    {
        scanf("%d", &a);
        if (a == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    return 0;
}