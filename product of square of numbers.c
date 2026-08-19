#include<stdio.h>
int main(){
    int i,n,product=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        product=product*i*i;
    }
    printf("Result:%d\n",product);
    return 0;
}
