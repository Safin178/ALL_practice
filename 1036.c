#include<stdio.h>
#include<math.h>
int main()
{

    double a, b, c, x, y, g, h;
    scanf("%lf%lf%lf", &a, &b, &c);
      g =  ((b * b) - (4.0 * a * c));
      h = (2.0 * a);



    if ((0.0 > g) || (h == 0.0))
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        x = (- b + pow (g,(1.0 / 2.0))) / h;
        y = (-b - pow (g,(1.0 / 2.0))) / h;
        printf("R1 = %.5lf\n", x);
        printf("R2 = %.5lf\n", y);

    }


return 0;



}
