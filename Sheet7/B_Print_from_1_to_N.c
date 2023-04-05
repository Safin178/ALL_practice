#include<stdio.h>

int potato(int n)
{
    if(n)
    {
        potato(n-1);
        printf("%d\n", n);
    }


}

int main()
{
    int n;

    scanf("%d", &n);

    potato(n);




    return 0;
}