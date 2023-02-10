
#include<stdio.h>
int main()
{
    /*
    s hocce smallest;
        p = smallest er position...
        doita loop..
    vs code try
    
    */
    int a, i, s, p= 0;
    scanf("%d", &a);
    int m[a];
    for(i = 0; i < a; i++)
    {
        scanf("%d", &m[i]);//5
//5 6 2 3 2
  
    }
     s = m[0];
    for(i = 0 ; i < a;i++)
    {
            if(s > m[i])
        {
            s = m[i];
            p = i;
        }

    }
    printf("%d %d\n", s, p + 1);











    return 0;
}

