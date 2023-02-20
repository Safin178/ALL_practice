#include<stdio.h>
int main()
{
    /*
    
    
    */int i, t;
    scanf("%d", &t);
    for(i =1; i <= t; i++)
    {
      int x, r;
      scanf("%d", &x);
      if(x >= 1900) r = 1;

     else if(1600 <= x && x <= 1899) r = 2; 
    
     else if(1400 <= x && x <= 1599) r = 3; 
    
     else {r = 4;}
     printf("Division %d\n\n", r);
    }
    
    
    
    
    
    return 0;
}