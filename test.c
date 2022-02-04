#include<stdio.h>
#include<math.h>
int main()
{

    int bin[100];
    int dec=0,m,n=1,i;
    
    do
    {
       scanf("%d",&bin);
    }while(bin==0 || bin==1);

    for(i=bin;i>0;i=i/10)
    {
        m=i%10;
        dec=dec+(m*n);
        n=n*2;
    }
    printf("The demical number is %d",dec);
    

// int a[5];
// int i=0;
// while(i<5){
//     scanf("%d",&a[i]);
//     i++;
// }
// int sum=0;
// sum=a[0]+a[2]+a[4];
// printf("%d", sum);

    return 0;
}
