#include<stdio.h>
int main()
{
    /*


    */
        int n,  j;
        scanf("%d", &n);
        int m[n];
        int ans=0 ;



        for(j = 0; j < n/ 2; j++)
        {

            if((m[j] + m[n - j -1]) == 1)
            {
                ans += 2;
            }
            else
            {
                break;
            }
        }

        printf("%d\n", n - ans);









    return 0;
}
