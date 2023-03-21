#include<stdio.h>
int main()
{
    int n ,i,c;
    scanf("%d", &n);
    int a = 0;
    int b =1, sum = 1;
    printf("0 1 ");
    for(i = 3 ; i<= n; i++)
    {
        c = a+b;
        printf("%d ",c);
        sum += c;
        a = b;
        b = c;
    }
printf(", %d", sum);




    return 0;
}
