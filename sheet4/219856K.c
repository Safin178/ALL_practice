#include<stdio.h>
#include<string.h>
int main()
{
    /*
    
    
    */
     int l , n, i, j, k;
     int lenA, lenB;
     scanf("%d", &n);
     char a[200], b[200], ans[200], temp[200];
     for(l = 0 ; l < n; l++)
     {
        scanf(" %s %s ", a, b);
        lenA = strlen(a);
        lenB = strlen(b);
        if(lenA <= lenB)
        {
            strcpy(ans, a);
            strcat(ans, b);
            int x = strlen(ans);
            for(i = 0, j= 0, k= 0; i < lenA;i++)
            {
                if(i % 2 != 0)
                {
                    ans[i] = b[j];
                    j++;
                    continue;
                }
                else{ ans[i] = a[k];k++;}
                
             
            }
            printf("%s\n %s %s\n", ans, a, b);
        }
     }
   
    
    return 0;
}