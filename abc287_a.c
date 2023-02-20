#include<stdio.h>
int main()
{
    /*
    
    
    */
    int n,y=0,a=0,i;
    char c[10];
    scanf("%d", &n);

    for(i = 0; i< n ; i++)
    {
        scanf("%s", c);
        if(c[0] == 'F')
        {
            y++;
        }
        else{a++;}

    }

    if(y > a)
    {printf("Yes\n");}
    else{printf("No\n");}
    
    
    
    
    
    
    
    
    
    
    return 0;
}