#include<stdio.h>
int main(void){
    int i,n,s;
    s=0;
    scanf("%d",&n);
    for (i=0;i<=n;i=i+2){
    s=s+i;
    }
    printf("%d\n",s);
    return 0;
}