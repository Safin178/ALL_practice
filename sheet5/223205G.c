#include<stdio.h>


int maxico(int x, int y)
{
    return x > y ? x : y;
}
int mini(int xx, int yy)
{
    return xx > yy ? yy : xx;
}
int main()
{
    int n, num; 
    scanf("%d", &n);
    int max = -1, minimum = 10000000;
    for(int i = 0 ; i< n; i++)
    {
        scanf("%d", &num);
        max = maxico(max ,num );
        minimum = mini(minimum, num);
    }
    printf("%d %d\n", minimum, max);


}