#include<stdio.h>
int main()
{

    // int arr[5] = {4, 5, 6, 8, 9};
    // printf("%d ", arr[0]);
    // printf("%d ", arr[1]);
    // printf("%d ", arr[2]);
    // printf("%d ", arr[3]);
    // printf("%d ", arr[4]);

    // int n, i;
    // printf("Insert size of array: ");
    // scanf("%d", &n);
    // int arr[n];
    // for(i=0;i<n;i++){
    //     scanf("%d", &arr[i]);
    // }
    // printf("Your array: ");
    // for(i=0;i<n;i++){
    // printf("%d ", arr[i]);
    // }


//     int n, i;
//     printf("Insert size of array: ");
//     scanf("%d", &n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     int x=0;
//     for(i=0;i<n;i++){
//     if(arr[i]%2!=0){
//         x++;
//     }
//     }
//     printf("Total odd: ");
//     printf("%d\n", x);

//         int y=0;
//     for(i=0;i<n;i++){
//     if(arr[i]%2==0){
//         y++;
//     }
//     }
//     printf("Total even: ");
//    printf("%d\n", y);



//     int n, i;
//     printf("Insert size of array: ");
//     scanf("%d", &n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     int x=0;
//     for(i=0;i<n;i++){
//     if(arr[i]%2!=0){
//         x++;
//     }
//     }
//     printf("Total odd: %d", x);
//     printf("--> ");
//     for(i=0;i<n;i++){
//         if(arr[i]%2!=0){
//         printf("%d ", arr[i]);
//     }
//     }

//         int y=0;
//     for(i=0;i<n;i++){
//     if(arr[i]%2==0){
//         y++;
//     }
//     }
//     printf("\nTotal even: %d", y);
//    printf("--> ");
//    for(i=0;i<n;i++){
//         if(arr[i]%2==0){
//        printf("%d ", arr[i]);
//    }
//    }

// int n, i;
// printf("Insert size of array: ");
// scanf("%d", &n);
// int arr[n];
// printf("A: ");
// int a[n];
// for(i=0;i<n;i++){
//     scanf("%d", &a[i]);
// }
// int b[n];
// printf("B: ");
// for(i=0;i<n;i++){
//     scanf("%d", &b[i]);
// }

// printf("Index: ");
// for(i=0;i<n;i++){
// if(a[i]==b[i]){
//     printf("%d ", i);
// }
// }

// int n, i, j;
// scanf("%d", &n);
// for(i=1;i<=n;i++){
//     for(j=1;j<=n;j++){
//         if(i%2!=0){
//             printf("*");
//         }
//         if(i%2==0){
//             printf("-");
//         }
//     }
//     printf("\n");
// }

// int n,i, j;
// scanf("%d", &n);
// for(i=1;i<=2*n-1;i+=2){
//     for(j=1;j<=i;j++){
//         printf("*");
//     }
//     printf("\n");
// }

int n, i;
scanf("%d", &n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d", &arr[i]);
}
int count=0;
for(i=0;i<n;i++){
    if(arr[i]%2==0){
        count++;
    }
}
printf("%d", count);

    return 0;
}