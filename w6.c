#include<stdio.h>
int main()
{
    int n;
    do{
        scanf("%d", &n);
    }while(n<=1 || n>=1000);
    int i, j;
    for(i=2;i<=n;i++){
        int x=0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                x++;
            }
        }
            if(x==2){
                printf("%d ", i); 
            }
        
    }
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int n;
//     do{
//         scanf("%d", &n);
//     }while(n<=1 || n>=1000);
//     int i, j;
//     for(i=2;i<=n;i++){
//         int x=0;
//         for(j=1;j<=i;j++){
//             if(i%j==0){
//                 x++;
//             }
//         }
//             if(x==2){
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }
