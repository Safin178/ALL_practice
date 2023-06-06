#include<stdio.h>
struct  student
{
    char id[10];
    char name[24];
    double CGPA;
    char department[24];
    char section[10];
};
int main()
{
    int n;
    scanf("%d", &n);
    struct student a[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf(" %s ", a[i].name);
        scanf(" %s ", a[i].id);
        scanf(" %lf ", &a[i].CGPA);
        scanf(" %s ", a[i].department);
        scanf(" %s ", a[i].section);
    }
    //input sesh

    for(i = 0; i< n; i++)
    {
        printf("%s ", a[i].name);
        printf("%s ", a[i].id);
        printf("%.2lf ", a[i].CGPA);
        printf("%s ", a[i].department);
        printf("%s \n", a[i].section);
        
    }
    return 0;
}
/*
3
safin c231062 5.00 CSE 1BM 
Dipto C123456 0.00 CSE 1BM
Nabil C231068 10.00 CSE  1BM


*/