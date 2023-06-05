#include<stdio.h>

void copyit(char a[], char b[])
{
    int i;
    for(i = 0; b[i] != 0; i++)
    {
        a[i] = b[i];
    }

}
int main()
{
    /*
    
    
    */
    
    //let's say

   char a[10] = "CSE";
   char b[10] ="Math";
   copyit(a, b);
   printf("%s", a);
   
    return 0;
}