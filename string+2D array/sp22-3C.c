#include<stdio.h>
#include<string.h>

int main()
{
    char s1[8] = "IIUC", s2[8] = "CSE", s3[8]="1121";

    printf("%d\n", strlen(s1));//string length , IIUC er length 4

    printf("%s\n", strcpy(s1,s2));// s1 delete hoi jabe oikane, s2 er content copy hoi jabe,IIUC becomes CSE

    printf("%s\n", strcat(s2,s3));//cat dile ekn s2 hoce CSE er shate s3 mane 1121 soho jokto hobe , CSE1121.
    printf("%s\n",strrev(s2));// eta kono string ke reverse kore dei(CSE1121 > 1211ESC)
    /*
    OutPut:
    4
    CSE
    CSE1121
    1211ESC
    eta hocce ans.. 

    
    */









    return 0;
}