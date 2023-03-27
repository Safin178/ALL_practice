#include<stdio.h>
int main()
{
    /*
    
    
    */
   int t, l;
   scanf("%d", &t);

   for(l = 0 ;l < t ; l++)
   {
    int n,i;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    int max = arr[0];
    for(i = 0; i< n ; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d\n", max- 96);
   }
    
    
    
    
    
    
    
    
    
    
    return 0;
}