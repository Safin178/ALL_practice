#include<stdio.h>
int main()
{

    char q[5],p;
    int s,a,b,c;
    scanf("%s %d",q,&s);
    scanf("%d %c %d %c %d",&a,&p,&b,&p,&c);
    int e,x,y,z;
    scanf("%s %d",q,&e);
    scanf("%d %c %d %c %d",&x,&p,&y,&p,&z);

    int D,H,M,S;

    /* din r jonno D*/
   


    // aikhane ghonta r calculation
    if(a>x){
        H=24-(a-x);
    }
    if(a==x){
        H=0;
    }
    if(a<x){
        H=x-a;
    }
    //aikhane minit r akoirokom ghontar mto

    if(b>y){
        M=60-(b-y);
    }
    if(b==y){
        M=0;
    }
    if(b<y){
        M=y-b;
    }
    //same kaj second r jonno
    if(c>z){
        S=60-(b-y);
    }
    if(c==z){
        S=0;
    }
    if(c<z){
        S=y-b;
    }
    if (H ==0)
    {
         D=e-s;
    }
    else{ D=e-s-1;}


    printf("%d dia(s)\n",D);
    printf("%d hora(s)\n",H);
    printf("%d minuto(s)\n",M);
    printf("%d segundo(s)\n",S);

    return 0;

}