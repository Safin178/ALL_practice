#include<stdio.h>//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N
int main()
{
    int a, b, f = 0, i;
   
    scanf("%d%d", &a, &b);
     char s[a+b+2];
    scanf("%s", s);
    
    for(int i = 0; i< (a+b+2);i++)
    {
        if(i == a && s[a] != '-')
        {f = 1; continue;}
        if(s[i] > '9'&& s[i] < '0' )
        {
            f =1;
        }
    }

    if(f == 1)
    {
        printf("No\n");
    }
    else{printf("Yes\n");}



    return 0;
}
