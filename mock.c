#include<stdio.h>
int main()
{
    // int  n, i;
    // scanf("%d", &n);
    // int a[n];
    // for(i=0;i<n;i++){
    //     scanf("%d", &a[i]);
    // }
    // int max=a[0], min=a[0];
    // for(i=0;i<n;i++){
    //     if(max<a[i]){
    //         max=a[i];
    //     }else if(min>a[i]){
    //         min=a[i];
    //     }
    // }
    // printf(" Max = %d\n", max);
    // printf(" Min = %d\n", min);
    

    // int n, i;
    // scanf("%d", &n);
    // char a[n];
    // for(i=0;i<n;i++){
    //     scanf(" %c", &a[i]);
    // }
    // for(i=0;i<n;i++){
    //     if(a[i]>='a' && a[i]<='z'){
    //         a[i]=a[i]-32;
    //     }
    // }
    // for(i=0;i<n;i++){
    //     printf("%c ", a[i]);
    // }

    int n, i, j;
    scanf("%d", &n);
    int a[n], x;
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(j=0;j<n;j++){
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
           x=a[i];
           a[i]=a[i+1];
           a[i+1]=x;
        }
    }
    }
    for(i=0;i<n;i++){
    printf("%d ", a[i]);
    }

    return 0;
}