#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
   char s1[20], s2[20], s[20];//lenght 20 dora important karon strcat korle range bari jai
   scanf("%s %s", s1, s2);
   printf("%d %d\n", strlen(s1), strlen(s2));
    
    strcpy(s, s1);//abcd copy korsi
    strcat(s, s2);//abcdef banaisi
    printf("%s\n", s);

    char temp;//1st char change korsi,,
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    printf("%s %s\n", s1, s2);
    
    
    
    
    
    
    
    
    return 0;
}