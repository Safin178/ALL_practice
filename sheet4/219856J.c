#include<stdio.h>
#include<string.h>
int main()
{
    /*
    suml hocce a , b, c asciigular sum value joma rakbo;
    let hocce letter gula input
    input 97 hole mane 'a' hole suml[97] no. ++ kori dibo, eibabe last e jegula 0 oigula printf korbo na
    */
    char let[10000000];//vs code e fail astese , CF e acceptedd
    scanf("%s", let);
    int i;
    int suml[125] = { };//intially shob zero korar trick,, amr lagtese 97 to 123, a to z

    for( i = 0 ; let[i] != 0; i++)
    {
       suml[let[i]]++;
    }
    for( i = 97 ; i <= 123; i++)
    {
        if(suml[i] != 0)
        {
            printf("%c : %d\n", i, suml[i]);
        }
    }
   
    
    return 0;
}