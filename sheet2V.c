#include<stdio.h>
int main()
{
    /*
    4 diye bag gele pum

    */
    int i , j, a;
    scanf("%d", &a);
    for(i = 1,j = 1 ;i <= a;i++)
    {
        while(1)
        {
            if (j % 4 != 0)
            {
                printf("%d ", j);
                j++;
            }
            else if (j % 4 == 0)
            {
                printf("PUM\n");
                j++;
                break;
            }

        }
    }
    return 0;
}
