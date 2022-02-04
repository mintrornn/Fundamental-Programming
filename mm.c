#include<stdio.h>
int main(){
    float n, a, b;
    char x;
    scanf("%f %c", &n, &x);
    if(x=='c')
    {
       a=(1.8*n)+32;
        printf("%.2f", a);
    }
    else 
    {
        b=(n-32)*(0.5555);
        printf("%.2f", b);
    }
    return 0;
}