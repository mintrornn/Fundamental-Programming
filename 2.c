#include<stdio.h>
int main()
{

    // for(i=0;i<n;i++)
    // {
    //     for(int b = i+1; b<n;b++){
    //         printf("1");
    //     }
    //     for(int b = 0; b<i+1;b++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // for(int a =0;a<n;a++){
    //     for(int b =a+1; b<n;b++){
    //         printf (" ");
    //     }
    //     for(int b =0;b<2*a+1;b++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }

    int n,i,j;
    scanf("%d", &n);
    for( i=1;i<=n;i++)
    {
        int count=0;
        for( j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }if(count==2){
        printf("%d ", i);
    }
    }
}