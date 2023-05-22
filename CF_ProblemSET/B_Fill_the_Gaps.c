#include <stdio.h>
#include<stdlib.h>

int main() 
{
    int n,a[100010],i,m[200010],j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int p1=0,p2=0;
    k=0;
    for(i=0;i<n-1;i++){
        int p=a[i]-a[i+1];
        if(p==1 || p==-1){
            m[k]=a[i];
            m[k+1]=a[i+1];
            k++;
            continue ;
        }
        else if(p<-1){
            p1+=(int)abs(a[i]-a[i+1])-1;
            m[k]=a[i];
            k++;
            for(j=a[i]+1;j<a[i+1];j++){
                m[k]=j;
                k++;
            }
        }
        else if(p>1){
            p2+=(int)abs(a[i]-a[i+1])-1;
            m[k]=a[i];
            k++;
            for(j=a[i]-1;j>a[i+1];j--){
                m[k]=j;
                k++;
            }
        }
    }
    for(i=0;i<(n+p1+p2);i++){
        printf ("%d ",m[i]);
    }
    return 0;
}