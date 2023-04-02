#include<stdio.h>
int main()
{
    /*
    
    
    */
    int l1, r1, l2, r2;
    int ans1, ans2;
    scanf("%d%d %d%d", &l1, &r1, &l2, &r2);

    if(l2 > r1 || r2 < l1)
    {
         printf("-1\n");
        return 0 ;
    }

    else if(l1 == l2 && r1 == r2)
    {
        ans1 = l1;
        ans2 = r1;
    }
    else if(l1 == l2)
    {
        if(r1 - r2 < 0)
        {
            ans1 = l1;
            ans2 = r1;
        }
        else
        {
            ans1 = l1;
            ans2 = r2;
        }
    }
    else if(r1 == r2)
    {
         if(l1 - l2 < 0)
        {
            ans1 = l2;
            ans2 = r1;
        }
        else
        {
            ans1 = l1;
            ans2 = r1;
        }
    }
    else if(l1 - l2 < 0)
    {
       if(r1 - r2 < 0)
        {
            ans1 = l2;
            ans2 = r1;
        }
        else
        {
            ans1 = l2;
            ans2 = r2;
        }
    }
    else if(l1 - l2 > 0)
    {
        if(r1 - r2 < 0)
        {
            ans1 = l1;
            ans2 = r1;
        }
        else{
            ans1 = l1;
            ans2 = r2;
        }
    }
    else
    {
        printf("-1\n");
        return 0 ;
    }
    
    printf("%d %d\n", ans1, ans2);

    
    
    
    
    
    
    
    
    
    return 0;
}