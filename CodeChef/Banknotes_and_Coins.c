#include<stdio.h>
int main()
{

  double a[100]={100,50,20,10,5,2,1, 0.50, 0.25, 0.1, 0.05, 0.01};
  int b[100],i,j,k;
  double n,box;

  scanf("%lf",&n);

  for(i=0;i<12;i+=1)
  {
    b[i]=n/a[i];
    n = n -(a[i]*b[i]) ;
  }

  printf("NOTAS:\n");
  for(j=0;j<6;j+=1)
  {
    printf("%d nota(s) de R$ %.2lf\n",b[j],a[j]);
  }

  printf("MOEDAS:\n");
  for(k=6;k<12;k+=1)
  {
    printf("%d moeda(s) de R$ %.2lf\n",b[k],a[k]);
  }
  return 0;
}