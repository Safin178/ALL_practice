#include<stdio.h>
#include<limits.h>


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
    int max =INT_MIN, minimum = INT_MAX;
    for(int i = 0 ; i< n; i++)
    {
        scanf("%d", &num);
        max = maxico(max ,num );
        minimum = mini(minimum, num);
    }
    printf("%d %d\n", minimum, max);


}