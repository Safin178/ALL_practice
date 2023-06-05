#include<stdio.h>
#include<string.h>//eta use korte bhula jabe na.
int main()
{
    /*
    
    
    */
   //let's say

   char a[10] = "CSE";
   char b[10] ="Math";
   int l;
//a>
     l =strlen(a) + strlen(b);// 7 ashbe

// b>
    strcat(a,b);//eta likle hoi jai
   // printf("%s", a);//CSEMathashche
   
// c >
   strcpy(a,b);
   //printf("%s", a);//copy hoi gese a ekn Math
// d >
    l = strcmp(a,b);
   //strcmp ekta value dei , a == b hoile 0 dibe
   //a < b hoile +1 or positive value
   //a > b hoile -1 or negative value
   //eta hocce lexicographically comapare kore, janina na banan hoise kina google it..
    if(l == 0)
    {
        printf("Equal\n");
    }
    else if(l < 0)
    {
        printf("a is Greater\n");
    }
    else if(l > 0)
    {
        printf("b is greater\n");
    }//a is greater ashche
    
    //a , b, c ,d ami alada alada test korsi, so mone koren d test kortesen tokon a , b , c comment kore diben..
    
    // ar jodi eirokom rekhe sen C er jonno a , b equal hoi jabe so d te equal output ashbe..jeta ig question e mean kore nai
    
    
    
    
    
    
    return 0;
}