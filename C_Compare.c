#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
    
    char x[25] , y[25];
    scanf("%s", x);
    scanf("%s", y);



    int a = strlen(x);
    int b = strlen(y);
    if(a <= b)
    {
        printf("%s", x);
    }
    else printf("%s", y);
    
    
    
    
    
    
    
    
    
    
    return 0;
}