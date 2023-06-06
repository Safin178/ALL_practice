#include<stdio.h>
struct  CT
{
    char id[10];
    char name[24];
    int ct1_marks;
    int ct2_marks;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct CT a[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf(" %s ", a[i].id);
        scanf(" %s ", a[i].name);
        scanf(" %d ", &a[i].ct1_marks);
        scanf(" %d ", &a[i].ct2_marks);
    }
    //input sesh
//just ct1 er shate ct 2 er compare korsi//
    for(i = 0; i< n; i++)
    {
        if(a[i].ct1_marks > a[i].ct2_marks)
        {
            printf("%d\n", a[i].ct1_marks);
        }
        else
        {
            printf("%d\n",a[i].ct2_marks);
        }
    }
    return 0;
}