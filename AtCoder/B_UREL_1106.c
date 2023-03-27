#include<stdio.h>
int main()
{
    /*
    
    
    */
  char m[20];
  scanf("%s", m);

  int i ;
  for(i = 0 ; i < 19; i++)
  {
        if((i == 5) || (i == 13))
        {
            m[i] = ' ';
        }
  }
    
        printf("%s", m);
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}