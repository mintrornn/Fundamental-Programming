#include<stdio.h>
int main()

{   
    // Basic coding
    //1
    // printf("\"Anything that you wish\" ");

    //2
    // printf("\\n " "is the next line character.\n");
    
    //3
    // int n;
    // scanf("%d", &n);
    // printf("The number is: %d\n", n);

    //4
    // int a, b, sum;
    // scanf("%d %d", &a, &b);
    // sum=a+b;
    // printf("%d\n", sum);

    //5
    // int a, b, re; 
    // scanf("%d %d", &a, &b);
    // re=a%b;
    // printf("%d\n", re);

    //6
    // int a, re; 
    // scanf("%d", &a);
    // re=a%10;
    // printf("%d\n", re);


    // condition
    // 1
    // int a;
    // printf("Insert number(1or2): ");
    // scanf("%d", &a);
    // if(a>=1 && a<=2){
    //     if(a==1){
    //         printf("Hello\n");
    //     }else{
    //         printf("World\n");
    //     }
    // }else{
    //     printf("Invalid\n");
    // }    

    // 2
    // int a;
    // scanf("%d", &a);
    // if(a%2==0){
    //     printf("Even");
    // }else{
    //     printf("Odd");
    // }

    // 3
    // int a, b, sum, sub;
    // char op; 
    // scanf("%d %d %c", &a, &b, &op);
    // if(op=='+'){
    //     sum=a+b;
    //     printf("%d\n", sum);
    // }else{
    //     sub=a-b;
    //     printf("%d\n", sub);
    // }

    // 4
    // int a, b, x=0;
    // char op;
    // scanf("%d %d %c", &a, &b, &op);
    // switch(op){
    //     case '+':
    //         x=a+b;
    //         printf("%d\n", x);
    //         break;
    //     case '-':
    //         x=a-b;
    //         printf("%d\n", x);
    //         break;
    //     case '*':
    //         x=a*b;
    //         printf("%d\n", x);
    //         break;
    //     default:
    //         if(b!=0){
    //         x=a/b;
    //         printf("%d\n", x);
    //         break;
    //         }
    //         else{
    //             printf("undefined\n");
    //             break;
    //         }
    // }

    // 5
    // int n;
    // scanf("%d", &n);
    // if(n>=1){
    //     if(n>=1 && n<20){
    //         printf("Get away minor!\n");
    //     }else if(n>=20 && n<=122){
    //         printf("Let's drink!\n");
    //     }else{
    //         printf("That's not human!\n");
    //     }
    // }else{
    //     printf("Invalid\n");
    // }

    // Loop
    // 1
    // int n, i;
    // scanf("%d", &n);
    // for(i=1;i<=n;i++){
    //     printf("%d ", i);
    // }
    // printf("\n");

    // 2
    // int i, j, n;
    // scanf("%d", &n);
    // for(i=1;i<=n;i++){
    //         printf("Hello World\n");
    //     }

    // 3
    // int n;
    // do{
    //     scanf("%d", &n);
    //     if(n<18 || n>122){
    //     printf("Invalid\n");
    // }
    // }while(n<18 || n>122);{
    //     printf("Okay, you pass!");
    // }

    // 4
    // int i, n;
    // scanf("%d", &n);
    // for(i=1;i<=n;i++){
    //     printf("%d ", i%10);
    // }

    // 5
    // int n, i; 
    // do{
    //     scanf("%d", &n);
    // }while(n<1 || n>1000);
    // for(i=1;i<=n;i++){
    //    if(i%3==0){
    //     printf("%d ", i);
    // }else if (i%7==0){
    //     printf("%d ", i);
    // }
    // }

    // 6
    // int n, i;
    // do{
    //     scanf("%d", &n);
    // }while(n<=0);
    //     for(i=n;i>1;i--){
    //         if(n%i==0){
    //             printf("%d, ", i);
    //         }
    //     }
    //     if(i==1){
    //         printf("and %d.", i);
    //     }


    
    

    // Nested loop
    // 1
    // int i, j;
    // for(i=1;i<=12;i++){
    //     printf("\t%d: ", i);
    //     for(j=1;j<=12;j++){
    //         printf("%d\t", i*j);
    //     }
    //     printf("\n");
    // }

    // 2
    // int n, i, j;
    // printf("Enter the number of row: ");
    // scanf("%d", &n);
    // for(i=n;i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    //3
    // int n, i, j;
    // printf("Enter the number of row: ");
    // scanf("%d", &n);
    // for(i=n;i>=1;i--){
    //     for(j=i;j>=1;j--){
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // 4
    // int n, i, j;
    // printf("Enter the number of row: ");
    // scanf("%d", &n);
    // for(i=n;i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    // 5
    // int n, i, j, k;
    // printf("Enter the number of row: ");
    // scanf("%d", &n);
    // for(i=1;i<=n;i++){
    //     for(j=i;j<=n;j++){
    //         printf("%d", j);
    //     }
        
    //     printf("\n");
    // }

    // 8
    // int i, j, n;
    // printf("Enter a number of row: ");
    // scanf("%d", &n);
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=(i*2)-1;j++){

    //     printf("*");
    // }
    //     printf("\n");
    // }

    // 9
    // int i, j, n;
    // printf("Enter a number of row: ");
    // scanf("%d", &n);
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         if(i%2==0){
    //             if(j%2==0){
    //         printf("0");
    //         }else if (j%2!=0){
    //             printf("1");
    //         }
    //     }else if(i%2!=0){
    //         printf("*");
    //     } 
    // }
    // printf("\n");
    // }

    // 10
    // int i, j, k, n, x=1;
    // scanf("%d", &n);
    // for(i=1;i<=n;i++){
    //     for(j=n-i;j<=i;j++){
    //         printf("*");
    //         x++;
    //     }
    // for(i=n-2;i>0;i--){
    //     for(k=n-i;k>0;k--){
    //         printf(" ");
    //     }
    //     printf("\n");
    // }

    //array
    // 1
    // int i;
    // int a[]={4, 5, 6, 8, 9};
    // printf("%d", a[5]);

    // // 2
    // int n;
    // printf("Insert size of array : ");
    // scanf("%d",&n);
    // int array[n],i;
    // for(i=0;i<n;i++)
    // {
    //     scanf("%d",&array[i]);
    // }
    // printf("Your array : ");
    // for(int j=0;j<n;j++)
    // {
    //     printf("%d ",array[j]);
    // }

    // 3
    // int n;
    // printf("Insert size of array: ");
    // scanf("%d", &n);
    // int a[n], i;
    // for(i=0;i<n;i++){
    //     scanf("%d", &a[i]);
    //     }
    // int x=0, y=0;
    // for(i=0;i<n;i++){
    // if(a[i]%2==0){
    //     x++;
    //     }
    // else{
    //     y++;
    // }
    // }
    // printf("Total odd : %d\n", y);
    // printf("Total even : %d\n",x);

    // 4
    // int n;
    // printf("Insert size of array: ");
    // scanf("%d", &n);
    // int a[n], i;
    // for(i=0;i<n;i++){
    //     scanf("%d", &a[i]);
    // }
    // int x=0, y=0;
    // for(i=0;i<n;i++){
    //     if(a[i]%2==0){
    //         x++;
    //     }else{
    //         y++;
    //     }
    // }
    // printf("Total odd : %d\n", y);
    // printf("--> ");
    // for(i=0;i<n;i++){
    //     if(a[i]%2!=0){
    // printf("%d ", a[i]);
    // }
    // }
    // printf("\n");
    // printf("Total even : %d\n", x);
    // printf("--> ");
    // for(i=0;i<n;i++){
    //     if(a[i]%2==0){
    //         printf("%d ", a[i]);
    //     }
    // }

    // 5
    int n;
    printf("Insert size of arrays: ");
    scanf("%d", &n);
    int a[n],b[n],i;
    for(i=0;i<n;i++){
        scanf("%d", a[i]);
        scanf("%d", b[i]);
        printf("Index: ");
    if(a[i]==b[i]){
        printf("%d ", i);
    }
    }

    
    return 0;
}