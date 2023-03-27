#include<stdio.h>
#include<string.h>
int main()
{
    int n, i;
    scanf("%d\n", &n);
    char str[n][20], temp[20];
    for(i = 0; i < n ; i++)
    {
        scanf("%s", str[i]);

    }
    scanf("%s", temp);
    for(i = 0; i < n ; i++)
    {
        if(strcmp(temp, str[i]) == 0)
        {
            printf("Yes\n");
            return 0;

        }

    }
    printf("No\n");



    return 0;
}
