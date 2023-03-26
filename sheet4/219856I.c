#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    2nd sem er bhai ekta palindrome bujaisilo ,Thanks bhaiya...
    */
    char s[1005];
    int f = 0;
    scanf("%s", s);
     int x  = strlen(s);
    for(int i = 0 ; i < (x/2); i++)
    {
       if(s[i] != s[x -i-1])
       {
         f = 1;
         break;
       }
    }
    if(f)// f == 1  , emne emne
    {
        printf("NO\n");
    }
    else{printf("YES\n");}
   
    
    return 0;
}