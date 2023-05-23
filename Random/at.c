#include<stdio.h>
struct player
{
        /* data */
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
    for(i = 0 ; i<n;i++)
    {
        scanf(" %s ", arr[i].name);
        scanf(" %s ", arr[i].country);
        scanf("%d", &arr[i].match_played);
        scanf("%d", &arr[i].goals);
        scanf("%lf", &arr[i].pass_accuracy);
    }
    //input newa sesh;
    int mgoal = -1;
    int position;
    for(i =0; i< n; i++)
    {
        if(arr[i].goals > mgoal)
        {
            mgoal = arr[i].goals;
            position = i;
        }
    }
      printf("%s\n", arr[position].name);
    printf("%s\n", arr[position].country);
    
    return 0;
}