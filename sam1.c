#include<stdio.h>
#include<conio.h>
int main()
{
    /*


    */
        int a,n, i = 0, temp ,ans=0 ;
        scanf("%d", &a);
        temp = a;
        while(a >0)
        {
            n = a %2;//reminder

            a = a / 2;
            i++;
        }
        while(temp > 0)
        {
            n = temp % 2;

            temp = temp / 2;
            gotoxy(i , 1);
            printf("%d", n);
            i--;
        }











    return 0;
}
