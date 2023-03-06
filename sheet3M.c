#include<stdio.h>
int main()
{
    /*
    mxp =max position
    mnp = min position



    */
   int n, mx , mn,mnp ,mxp , temp, i ;
   scanf("%d", &n);
   int m[n];
   mn = 1000000;
   mx = -1000000;
    for(i = 0; i< n; i++)
    {
        scanf("%d", &m[i]);
        if(m[i] < mn )
        {
            mnp = i;
            mn = m[i];
        }
        if (m[i] > mx)
        {
            mxp = i;
            mx = m[i];
        }
    }
    temp = m[mnp];
    m[mnp] = m[mxp];
    m[mxp] = temp;
    for(i = 0; i < n-1; i++)
    {
        printf("%d ", m[i]);
    }
    printf("%d\n", m[n-1]);









    return 0;
}
