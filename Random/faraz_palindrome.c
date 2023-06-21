#include<stdio.h>
#include<string.h>


int is_palindrome(char s[])
{
    int n = strlen(s);
    int i;
    for(i = 0 ; i < n/2;i++ )
    {
        if(s[i] != s[n-1-i])
        {
            return 0;//palindrome na hoile mane mil na taile return 0
        }

    }
    //upore return 0 na hoile auto return 1 hoi jabe
    return 1;
}









int main()
{
    /*
    
    
    */
    
    char s[1000];
    scanf("%s", s);

    int x;
    x = is_palindrome(s);

    if(x == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}