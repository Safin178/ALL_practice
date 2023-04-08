#include<stdio.h>
int main()
{
    int a;
    long long int b;
    char c;
    double d;
    double e;



    scanf("%d %lld %c %lf %lf", &a , &b , &c, &d, &e);
    
    //3 12345678912345 a 334.23 14049.30493
    
    
    
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%c\n", c);
    printf("%.2lf\n",  d);
    printf("%.5lf\n", e);
    
    
    
    
    
    return 0;
}