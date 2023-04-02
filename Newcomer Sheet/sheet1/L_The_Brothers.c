#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
    int f = 0;
    char s1[1000] , s2[1000];
    char nam1[1000], nam2[1000];
    scanf("%s %s", s1, nam1);
    scanf("%s %s", s2, nam2);
    int x = strlen(nam1);
    int y = strlen(nam2);
    if(x == y)
    {
        for(int i = 0 ; i < x ; i++)
        {
            if(nam1[i] != nam2[i])
            {
                f = 1;
                break;
            }
        }
        if(f == 0)
        {
            printf("ARE Brothers\n");
        }
        else printf("NOT\n");
    }
    else printf("NOT\n");


    
    
    
    
    
    
    
    
    
    
    
    return 0;
}