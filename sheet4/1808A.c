/******************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************/

#include <stdio.h>

int big(int j)
{
    int  k;
    int ma = -1;
    int mi = 9;
    int ansx;
    while(j>0)
    {
        k = j % 10;
        if(k > ma)
        {
            ma = j;
        }
        if(k < mi)
        {
            mi = j;
        }
        j /= 10;
    }
    
              ansx = ma - mi;
          
       
       
       
    return ansx;

}

int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int a , b, i, max  = -1, x,y,pos,ans;
       scanf("%d%d", &a, &b);
       for(i = a; i <= b;i++)
       {
         ans = big(i);
          
       
       
       if(max < ans)
       {
            max  = ans;
           pos = i;
       }
       }
       printf("%d\n", max);
   }

    return 0;
}