#include <stdio.h>

int main() {
	// your code goes here
	int t, l;
	scanf("%d", &t);
	for(l = 0 ; l < t; l++)
	{
	    int n , i;
	    scanf("%d", &n);
	    int a[n], b[n];
	     for(i = 0 ; i < n; i++)
	    {
	        scanf("%d", &a[i]);
	    }//alice er input
	      for(i = 0 ; i < n; i++)
	    {
	        scanf("%d", &b[i]);
	    }//bob er input
	    int day = 0;
	    for(i = 0 ; i < n; i++)
	    {
	        
	        if ((b[i] <= (a[i] *2)) && (a[i] <= (b[i] *2)) )day++;//both happy..
	    }
	    printf("%d\n", day);
	}
	return 0;
}

