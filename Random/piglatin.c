#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
    char s[1000];
    scanf("%[^\n]", s);
    int l = strlen(s);
    int i, d=-1 ;
    char k = s[0], t;
    for( i = 1; i <= l; i++)
    {
        if(d == i){continue;}
        if(s[i] == 0)
        {
             printf("%cay", k);
             break;
        }
        else if(s[i] == ' ' ||s[i] == 0)
        {
            printf("%cay", k);
            k =s[i+1];
            d = i+1;
        }
        printf("%c", s[i]);
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}