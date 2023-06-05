#include<stdio.h>
int main()
{
    /*
    
    
    */
    char s[10];
    scanf("%s", s);//space porjonto input 
    printf("Age = %c%c,", s[0], s[1]);
    if(s[2] == 'T')
    {
        printf("Taxpayer,");
    }
    else
    {
        printf("Not a Taxpayer,");
    }


    if(s[3] == 'L')
    {
        printf("Landowner\n");
    }
    else
    {
        printf("Not a Landowner\n");
    }
    

    
    
    
    
    
    
    
    
    
    
    
    return 0;
}