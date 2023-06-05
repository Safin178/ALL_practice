#include<stdio.h>
int main()
{
    /*
    
    
    */
    int a[5][5] ;//arr likte icca hocce na;
   int i , j;
   for(i = 0; i < 5; i++)
   {
    for(j = 0; j < 5; j++)
    {
        scanf("%d", &a[i][j]);
    }
   }
   int q;
   scanf("%d", &q);
   q = q-1;
    //0 index tai 3 no. row mani i = 2, tai q er man 1 komaite hobe;
    //input sesh;

    int rsum = 0, csum = 0;
    for(i = 0; i < 5; i++)
    {
        rsum = rsum + a[q][i];//3 no. row 9 8 7 6 5 shob gular jog fol
        csum = csum + a[i][q];//3 no. col 3 4 7 3 5
    }
    printf("Row sum = %d\n", rsum);
    printf("Col sum = %d", csum);

    /*
        arekta shohoz upai
        rsum = a[q][0] + a[q][1] + a[q][2] + a[q][3] + a[q][4];
        tai loop diye korsi, i er value change hocce..
    
    
    */
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}