#include<stdio.h>
int main()
{
    /*
    
    
    */
    int x , y, k, s, cnt = 0;

    scanf("%d%d", &k, &s);
    for(x= 0 ; x <=k;x++)
    {
        for(y = 0; y <= k; y++)

        {
            int z = s - x - y;
              if ((x+ y + z == s) &&  ( z <= k ) && (z >=0))
            {
                            cnt++;
            }

        }
    }
    printf("%d\n", cnt);
    
    
    
    
    
    
    
    
    return 0;
}