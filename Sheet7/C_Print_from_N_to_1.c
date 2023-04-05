#include<stdio.h>

int potato(int n)
{
    if(n!= 1)
    {
         printf("%d ", n);
        potato(n-1);
       
    }
    else
    printf("1\n");

}

int main()
{
    int n;

    scanf("%d", &n);

    potato(n);




    return 0;
}