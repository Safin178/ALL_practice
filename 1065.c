#include<stdio.h>
int main()
{
    /*


    */
    int a, i,  b=2,ans=0,x;
    for(i = 1; i <= 5;i++)
    {
        scanf("%d", &a);
          x = ((a % b) + b) % b;
        if(x == 0)
        {
            ans++;
        }
    }
    printf("%d valores pares\n",ans);










    return 0;
}
