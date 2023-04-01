#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
    int t, i, j, n;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        char arr[n];
        scanf("%s", arr);
        char u[n];
        u[0]  = arr[0];
        for(i = 1,j = 1 ; i < n ;i++)
        {
            if(arr[i] != arr[i -1])
            {
                u[j] = arr[i];
                j++;
            }
            
        }
        u[j] = '\0';
    printf("%s\n", u);



    }
   
    
    return 0;
}