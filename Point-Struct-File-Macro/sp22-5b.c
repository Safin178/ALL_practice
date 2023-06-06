#include<stdio.h>

FILE *fin;
FILE *fout;

int main()
{
    char a[10000], i= 0;

    fin = fopen("copy.txt", "r");
    while(fscanf(fin, "%c", &a[i]) != -1)
    {
        i++;
    }
    fclose(fin);


    int n = i;


    fout= fopen("clone.txt", "w");
    for(i = n-1; i >= 0; i--)
    {
        fprintf(fout,"%c", a[i]);
    }
    fclose(fout);



    return 0;
}
