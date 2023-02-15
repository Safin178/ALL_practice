#include<stdio.h>
int main()
{
    double x , y;
    scanf("%lf%lf", &x , &y);

    if ((x == 0) && (y == 0))
    {
        printf("Origem\n");//x0y0
    }
    else if ((y == 0)  && ( x != 0))
      {
          printf("Eixo X\n");
      }
    else if (x == 0)
    {
        printf("Eixo Y\n");
    }
    else if (x > 0)
    {
        if(y > 0)// x + ,y+
        {
            printf("Q1\n");
        }
        else if(y < 0)// x + y-
        {
            printf("Q4\n");
        }
    }
      else if (x < 0)
      {
          if(y > 0)// x- y+
          {
              printf("Q2\n");
          }
          else if(y < 0)//x-y-
          {
              printf("Q3\n");
          }
      }


    return 0;
}


