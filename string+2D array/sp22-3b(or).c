#include<stdio.h>
int main()
{
    /*
    sp 22 - 3b te je 5 x 5 2d array dise oita ke input dore korsi
        5
        1 2 3 4 5
        7 8 4 5 6
        9 8 7 6 5
        5 4 3 2 1
        1 3 5 7 9
        
    
    */
    int n;
    scanf("%d", &n);
    int a[n][n] ;//arr likte icca hocce na;
   int i , j;
   for(i = 0; i < n; i++)
   {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
   }
   //input sesh

   // diagonal mane kona koni mone hoi , current nai tai google o korte partesi na
   // 1st e \ pasher ta kori , eita right diagonal boli..
    int rdia =0;
   for(i = 0 ; i < n ; i++)
   {
     // x += 1 , mane x = x + 1; 
        rdia += a[i][i];// 0 0, 1 1, 2 2, 3 3, 4 4, 5 5;
   }
   //ekon / ei pasher ta left dia dori
   int ldia = 0;
   for(i = 0;  i<n ; i++)
   {
        ldia += a[i][(n-1)-i];//(n-1) karon 0-index,and -i karon 0 4, 1 3, 2 2,3 1, 4 0,
   }
   //uporer kaj ta kinto 1 loop ei korte partam..
   printf("Right dia = %d\n", rdia);// out = 27
   printf("Left dia = %d\n", ldia);// out = 22 

  
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}