#include<stdio.h>
struct player
{
    char name[24];
    char country[24];
    int match_played;
    int goals;
    double pass_accuracy;
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
        scanf("%d", &arr[i].match_played);
        scanf("%d", &arr[i].goals);
        scanf("%lf", &arr[i].pass_accuracy);
    }
//input newa sesh;
    int mgoal = -1;//most goals..
    int position;
    for(i =0; i < n; i++)
    {
        if(arr[i].goals > mgoal)//every player er goals compare kore most goals er position store kore raksi//
        {
            mgoal = arr[i].goals;
            position = i;
        }
    }
    printf("%s\n", arr[position].name);
    printf("%s\n", arr[position].country);

    return 0;
}
/*
Input : 
2
Messi
Argentina
07
07
91.2
Ronaldo
Portugal
05
01
76

Output :
Messi
Argentina



*/