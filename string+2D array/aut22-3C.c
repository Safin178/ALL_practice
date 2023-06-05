#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    gets(str);// ekdom \n projonto input nei

    int l = strlen(str); //string er length..//string.h library kinto so code e 1st e check den.

    int j ;
    int a = 0, e = 0, i = 0, o = 0, u=0;
    for(j = 0; j < l; j++)// loop er jonno j use korsi,, so str[j] dite bulben na, 
    {
        if(str[j] == 'a')
        {
            a++;
        }
        else if( str[j] == 'e')
        {
            e++;
        }
        else if(str[j] == 'i')
        {
            i++;
        }
        else if(str[j] == 'o')
        {
            o++;
        }
        else if(str[j] == 'u')
        {
            u++;
        }
    }
    int t = a+e+i+o+u;// t is for total, read question

    printf("a => %d (%.2lf%%)\n", a, (a/(double)t) * 100 );// % eta print korte %% dite hoi, double t oita typecasting
    printf("e => %d (%.2lf%%)\n", e, (e/(double)t) * 100 );
    printf("i => %d (%.2lf%%)\n", i, (i/(double)t) * 100 );
    printf("o => %d (%.2lf%%)\n", o, (o/(double)t) * 100 );
    printf("u => %d (%.2lf%%)\n", u, (u/(double)t) * 100 );
    return 0;
}
//i don't love bangladesh.
