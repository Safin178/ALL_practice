#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
   char a[25], b[25];
   int x;
   scanf("%s %s", a, b);
   x = strcmp(a, b);//a coto hole minus ,a boro hoile plus,
    
    if(x <=0)
    {
        printf("%s\n", a);
    }
    else
    {
        printf("%s\n", b);
    }
    
    
    
    
    
    return 0;
}