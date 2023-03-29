#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
   int t;
   scanf("%d", &t);
   while(t--)
   {
        char s[1000000];
        scanf("%s", s);
        int f = 0, i , j;
        for(i = 0; i < (strlen(s)) ; i++)
        {
            for(j = 0; j <= i; j++)
            {
                if(((s[j] == '0') && (s[j+1] == '1') && (s[j+2] == '0')) || ((s[j] == '1') && (s[j+1] == '0') && (s[j+2] == '1')))
                 f = 1;break;
            }

        }
        if(f == 1)
        {
            printf("Good\n");
        }
        else 
        printf("Bad\n");

   }





   
   
    
    return 0;
}