#include<stdio.h>
void fun(int x)
{
    if(x != 0)
        fun(x+1);
    printf("%d ", x);
}
int main()
{
    fun(-10);
    return 0;
}


//explain
/*
    if x > 0 then program will crash because the function will never reach its base case.
    but if x <= 0 than it will work properly..
*/

