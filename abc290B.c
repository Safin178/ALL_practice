#include<stdio.h>
int main()
{
    /*


    */
    int n, k, i,j ;
    scanf("%d%d", &n, &k);
    char s[ n];
    scanf("%s", s);
    for(i = 0, j = 0; i < n; i++)
    {

        if((j < k) && (s[i] == 'o'))
        {
            s[i] = 'o';
            j++;
        }
        else
        {
            s[i] = 'x';
        }
    }
    for(i = 0; i< n;i++)
    {
        printf("%c", s[i]);
    }









    return 0;
}
