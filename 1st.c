#include<stdio.h>
int main()
{
    /*


    */
    int t, tl, ans, j, s, g, n, i, tmp;
        scanf("%d", &t);//t test case tl test case loop
        for(tl = 1 ; tl <= t;tl++)
        {
            scanf("%d", &n);
            int m[n];
            for(i = 1; i<=n; i++)
            {
                scanf("%d", &m[i]);//1 index
            }
            for(j = 1; j < n ; j++)
            {
                if( m[j] == -1)
                {
                    m[j] = 1;
                }
                else if( m[j] == 1)
                {
                    m[j] = -1;
                }
                if (m[j+1] == -1)
                {
                    m[j+1] = 1;
                }
                else if(m[j+1] == 1)
                {
                    m[j+1] = -1;
                }
                s = 0;

                for(g= 1; g <= n;g++)
                {
                    s +=m[g];
                }


                if(ans < s)
                {
                    ans = s;
                }

            }
            printf("%d\n", ans);


























        }


    return 0;
}
