#include <stdio.h>
#include <string.h>
int main()
{
    // Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/".

    // Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789".

    char k[100] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char o[100] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char org[10000];
    char key[10000];
    int n, i;
    int x = strlen(k);
    for (i = 0; i < x; i++)
    {
        org[o[i]] = k[i];
        key[k[i]] = o[i];
    }
    scanf("%d ", &n);

    char ques[100000];

    scanf("%s", ques);
    x = strlen(ques);
    for (i = 0; i < x; i++)
    {
        if (n == 1) // 1 means org input, key output,
        {
            printf("%c", org[ques[i]]);
        }
        else
        {
            printf("%c", key[ques[i]]);
        }
    }

    // cleanest code i ever written , damn i am happy,(¬‿¬)
    return 0;
}