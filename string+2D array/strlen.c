#include<stdio.h>

int length(char a[])
{
    int i = 0;
    while(a[i] != 0)
    {
        i++;
    }
    return i;
}
int main()
{
    /*
    
    
    */
    char a[10] = "C231062";

    int l = length(a);
    printf("%d", l);
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}