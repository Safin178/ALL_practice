#include<stdio.h>
int main()
{
    /*


    */
    int a, temp;
    scanf("%d", &a);
    int m[a], x,i;
    for(i = 0; i< a; i++)
    {
        scanf("%d", &m[i]);
    }
    
    for(i = 0 ; i < a;i++)
    {
        for(int j = i+1 ; j <=a ; j++)
        {
            if(m[i] > m[j])
            {
                temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }

    }
    
     for(i = 0; i< a; i++)
    {
        printf("%d ", m[i]);
    }










    return 0;
}
