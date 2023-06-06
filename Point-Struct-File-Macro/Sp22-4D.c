#include<stdio.h>
//similar like aut22-4c..
struct player
{
    char name[24];
    char country[16];
    int runs;
    double average;
};

int main()
{
    int n;
    scanf("%d", &n);
    struct player arr[n];
    int i;
    for(i = 0 ; i < n; i++)
    {
        scanf(" %s ", arr[i].name);
        scanf(" %s ", arr[i].country);
        scanf("%d", &arr[i].runs);
        scanf("%lf", &arr[i].average);
    }
//input newa sesh;
    double mavg = -1;//most average.
    int position;
    for(i =0; i < n; i++)
    {
        if(arr[i].average > mavg)//every player er goals compare kore most goals er position store kore raksi//
        {
            mavg = arr[i].average;
            position = i;
        }
    }

    printf("%s\n", arr[position].name);
  

    return 0;
}
/*
Input : 
2
Messi
Argentina
300
65.87
Ronaldo
Portugal
300
97.86

Output :
Ronaldo



*/