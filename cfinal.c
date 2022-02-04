#include <stdio.h>
#include<stdlib.h>
#include<time.h>
// int area(int base, int height);
// int oddeven(int n);
// int useless(int x);
int main(){
/* int count=0;         // Counting zero
    int size = 3;      // Size of matrix
    int n[size][size]; // Matrix
    // Getting input
    printf("Please input %dx%d matrix:\n",size,size);

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            scanf("%d", &n[i][j]);
        }
    }
     for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(n[i][j]==0){
                count++;
            }
       }
    }
    // Printing matrix
    printf("\nYour matrix:\n");

    for(int i=0; i<size; i+=1){
        for(int j=0; j<size; j++){
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    // Printing count
    // If there's one zero, zero doesn't have s
    // Otherwise, it will print 'zeros'
    printf("\n\nThis matrix has %d zero", count);

    if(count!=1){
        printf("s");
    }
    printf("%c", 46); // This is '.' (fullstop) */

/* //printf the output
    int arr[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    } */

/*  //transpose
    int arr[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    } */

/*  //sum of two matrix
    int a[3][3], b[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("Input first array : %d", &a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("Input first array : %d", &b[i][j]);
        }
    }
    int sum[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    } */

/*  //sum of math, sci, so score;
    int mss[5][3];
    int i, j;
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            scanf("%d", &mss[i][j]);
        }
    }
    printf("Final matrix: \n");
    int sum[5];
    for(i=0;i<5;i++){
        sum[i]=0;
        for(j=0;j<3;j++){
            printf("%d ", mss[i][j]);
            sum[i]+=mss[i][j];
        }
        printf("%d \n", sum[i]);
    } */

    // int base, height;
    // scanf("%d %d", &base, &height);
    // int a=area(base, height);
    // printf("%d", a);
    //function
    // int area(int base, int height){
    //     int area = (0.5*base)*height;
    //     return area;
    // }
    // int n;
    // scanf("%d", &n);
    // int x = oddeven(n);
    // if(x==1){
    //     printf("even");
    // }if(x==-1){
    //     printf("odd");
    // }
    //function
    // int oddeven(int n){
    //     if(n%2==0){
    //         return 1;
    //     }else{
    //         return -1;
    //     }
    // }
    // int x;
    // scanf("%d", &x);
    // int print = useless(x);
    // printf("%d", print);
    // function
    // int useless(int x){
    // for(int i=0;i<x;i++){
    // printf("MUDA");
    // }
    // }

    // char str[10] = "COMPUTER";

    //     char *p;

    //     p = str;
    //     printf("%d", (p+5)-(&str[3]));

    // int arr[3][4];
    // int i,j;
    // srand(time(NULL));
    // for(i=0;i<3;i++){
    //     for(j=0;j<4;j++){
    //         arr[i][j] = rand() % 10;
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // int arr[3][4];
    // int i,j;
    // for(i=0;i<3;i++){
    //     for(j=0;j<4;j++){
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // int sumr[i]=0, sumc[j]=0;
    // for(i=0;i<3;i++){
    //     for(j=0;j<4;j++){
    //         sumr[i]+=arr[i];
    //     }
    // }
    // for(i=0;i<3;i++){
    //     for(j=0;j<4;j++){
    //         sumc[j]+=arr[j];
    //     }
    // }
    // printf("row : %d\n col : %d", sumr, sumc);

    // int arr[3][3];
    // printf("Input elements in the matrix : \n");
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("element - [%d],[%d] :",i, j);  
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ", arr[i][j]);
    //     }
    //     printf("\n");
    // }

    // int n;
    // printf("Input the size of the square matrix (less than 5):");
    // do{
    //     scanf("%d", &n);
    // }while(n>5);
    // int a[n][n];
    // int b[n][n];
    // printf("Input elements in the first matrix :\n");
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //     printf("element - [%d],[%d]:", i, j);
    //     scanf("%d", &a[i][j]);
    //     }
    // }
    // printf("Input elements in the second matrix :\n");
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //     printf("element - [%d],[%d]:", i, j);
    //     scanf("%d", &b[i][j]);
    //     }
    // }
    // printf("The first matrix is:\n");
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("The second matrix is:\n");
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         printf("%d ", b[i][j]);
    //     }
    //     printf("\n");
    // }
    // int sum[n][n];
    // printf("The Addition of two matrix is:\n") ;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         sum[i][j]=a[i][j]+b[i][j];
    //     }
    // }   
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         printf("%d ", sum[i][j]);
    //     }
    //     printf("\n");
    // }   

    // char str[100];
    // int n=0;
    // printf("Input the string:");
    // fgets(str, sizeof str, stdin);
    // while(str[n]!='\0'){
    //         n++;
    // }
    // printf("Length of the string is : %d\n", n);

    // char str[100];
    // int n=0;
    // printf("Input the string:");
    // fgets(str, sizeof str, stdin);
    // printf("The characters of the string are : ");
    // while(str[n]!='\0'){
    //         printf("%c ", str[n]);
    //         n++;
    // }
   
    return 0;
}