#include<stdio.h>
int main()
{
    /*
    Navg ==normal avarage


    */
        double n1, n2, n3, n4, Navg, n, x,t;
        scanf("%lf%lf%lf%lf", &n1,&n2,&n3,&n4);
        t = ((n1 * 2 ) + (n2 * 3) + (n3 * 4) + (n4 * 1));

        Navg = (t / ( 2+ 3 + 4 +1));
        if (Navg >= 7.0)
        {
            printf("Media: %.1lf\n", Navg);
            printf("Aluno aprovado.\n");
        }
        else if (Navg < 5.0)
        {
             printf("Media: %.1lf\n", Navg);
            printf("Aluno reprovado.\n");
        }
        //normal kaj sesh ekn abnormal


        else if ((Navg <= 6.9) && (Navg >=  5.0))
        {
            printf("Media: %.1lf\n", Navg);
            printf("Aluno em exame.\n");
            printf("Nota do exame: ");
            scanf("%lf", &n);
            printf("%.1lf\n", n);
            x = (n + Navg) / 2;
            if (x >= 5.0)
                {
                    printf("Aluno aprovado.\n");
                }
                else if (x < 5.0)
                {
                    printf("Aluno reprovado.\n");
                }
            printf("Media final: %.1lf\n", x);

        }








    return 0;
}
