#include<stdio.h>
int main()
{
    /*


    */
    int t , r, sum,sum2 , i ,j ,  k, n, a, b;
    scanf("%d", &t);
    for(r = 0; r < t;r++)
    {
      scanf("%d", &n);
      int arr[n];
      for(i = 0, sum = 0; i < n; i++)
      {
          scanf("%d", &arr[i]);// input nisi
          sum +=arr[i];
      }
      for(j = 0;j < n-1;j++)
      {
          a = arr[j] ;
          arr[j] =arr[j] * (-1);
          b = arr[j+1];
           arr[j+1] = arr[j+1] * (-1);

           sum2 = 0;
          for(k= 0; k < n; k++ )
          {
              sum2+=arr[k];
          }
          arr[j]=a ;
         arr[j+1]= b;

          if( sum <= sum2)
          {
              sum = sum2;
          }
      }
        printf("%d\n", sum);
    }











    return 0;
}
