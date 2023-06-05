#include<stdio.h>
#include<string.h>//nijei add korte bule gesilam ,
int main()
{
    /*
    
    
    */
   char str[1000];//1000 size dorsi karon er theke boro dibe na ig

   scanf("%s", str);// %s , space porjonto input nei;
   int l = strlen(str); //string er length,//string.h

   int i, f = 0;
   for(i = 0; i < l-1;i++)//l-1 karon amra str[i+1] diye check kortesi tai .
   {
        if(str[i] != str[i+1])
        {
            f = 1; 
            break;//prime number kore takle eta bujhar bishoi,
        }
   }
   if(f == 0)
   {
        printf("Identical\n");
   }
   else
   {
    printf("Not Identical");
   }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}