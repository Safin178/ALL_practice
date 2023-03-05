#include<stdio.h>
int main()
{
    /*


    */
   long long int x, ans = 0 ,i;//48 case e range jamela
   
    scanf("%lld", &x);
   long long int f[51];
    f[1] = 0;//1
    f[2] = 1;//2
    if(x != 1 && x!= 2){
        for(i = 3 ; i <= x;i++)
        {
            f[i] = f[i-1] + f[i-2];
        }
        ans = f[x-1] + f[x-2];
        printf("%lld", ans);
     }
    else{
        if(x ==1 ){printf("0");}
        else {printf("1");}
    }








    return 0;
}
