#include<stdio.h>
int main()
{
    int n, i, a, b;
    char have='n';
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d %d", &a, &b);
    for(i=0;i<n;i++){
        if(arr[i]==a)
        {
            arr[i]=b;
            have ='y';
        }
    }
        if(have!='y'){
            printf("not found");
        }
        else{
        for(i=0;i<n;i++){
            printf("%d ", arr[i]);
        }
        }
    return 0;
}


// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n, i, bi;
//     scanf("%d", &n);
//     int arr[n];
//     if(arr[i]==0 && arr[i]==1){
//     for(i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n<j++){
//         bi=arr[i]*pow(2,j);
//     }
//     }
//     printf("%d", bi);
//     return 0;
// }
