#include <stdio.h>
#include <string.h>
int main()
{
    /*


    */
    char s[105], temp ;
    int x, i;
    scanf("%s", s);
    x = strlen(s);
     
    for(i = 0; i < x ; i++)
    {
       if(i % 2 == 0){
        temp = s[i];
        s[i] = s[i+1];
        s[i+1] = temp ;}
    }
    printf("%s", s);

    return 0;
}
