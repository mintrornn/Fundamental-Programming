#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    for(i=-n;i<=n;i++){
    if(i%2==0  && i!=0){
        printf("%d ", i);
    }
    } 
    return 0;
}