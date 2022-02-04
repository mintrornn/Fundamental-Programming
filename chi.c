// #include<stdio.h>
// int isEven(int n){
//     if(n%2==0){
//         return 1;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     int out=isEven(n);
//     if(out==1){
//         printf("It is even");
//     }else{
//         printf("It is odd");
//     }
//     return 0;
// }

// #include<stdio.h>
// int isNeg(int n){
//     if(n<0){
//         printf("negative");
//     }else{
//         printf("positive");
//     }
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     isNeg(n);
//     return 0;
// }

// #include<stdio.h>
// int printin(int time, int n){
//     for(int i=0;i<time;i++){
//         printf("%d ", n);
//     }
// }
// int main(){
//     int time, n;
//     scanf("%d", &time);
//     scanf("%d", &n);
//     printin(time,n);
//     return 0;
// }

// #include<stdio.h>
// int isgreat(int n, int m){
//     if(n>m){
//         return 1;
//     }else{
//         return 0;
//     }
// }
// int main(){
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int out=isgreat(n,m);
//     if(out==1){
//         printf("%d is greater than %d", n,m);
//     }else{
//         printf("no");
//     }
// }

// #include<stdio.h>
// void num(int *ptr){
//     for(int i=0;i<10;i++){
//         printf("%d ", ptr[i]);
//     }
// }
// int main(){
//     int arr[]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int *ptr;
//     ptr=&arr[0];
//     num(ptr);
//     return 0;
// }

// #include<stdio.h>
// float compute_avg(int n , int *ptr){
//     float sum=0, avg=0;
//     for(int i=0;i<n;i++){
//         sum+=ptr[i];
//     }
//     avg=sum/n;
//     return avg;
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]); 
//     }
//     int *ptr;
//     ptr=&arr[0];
//     float avg = compute_avg(n, ptr);
//     printf("%.2f\n", avg);
//     return 0;
// }

// #include<stdio.h>
// void find_max_min(int n, int *ptr, int *max, int *min){
//     *max=ptr[0];
//     *min=ptr[0];
//     for(int i=0;i<n;i++){
//         if(*max<ptr[i]){
//             *max=ptr[i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(*min>ptr[i]){
//             *min=ptr[i];
//         }
//     }
// }
// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]); 
//     }
//     int *ptr;
//     ptr=&arr[0];
//     int max, min;
//     find_max_min(n,ptr,&max,&min);
//     printf("%d %d", max,min);
//     return 0;
// }

// #include<stdio.h>
// void swap(int *x, int *y){
//     int mint=*x;
//     *x=*y;
//     *y=mint;
// }
// void sort_values(int *x, int *y, int *z){
//     if(*x>*y){
//         swap(x,y);
//     }if(*x>*z){
//         swap(x,z);
//     }if(*y>*z){
//         swap(y,z);
//     }
// }
// int main(){
//     int x,y,z;
//     scanf("%d %d %d", &x, &y, &z);
//     sort_values(&x,&y,&z);
//     printf("%d %d %d", x, y, z);
//     return 0;
// }

// #include<stdio.h>
// #define MAX_LEN 21
// int main(){
//     char input_str[MAX_LEN];
//     fgets(input_str,MAX_LEN,stdin);
//     int countal=0 ,countnum=0;
//     for(int i=0;input_str[i]!='\0';i++){
//         if(input_str[i]>='a' && input_str[i]<='z' || input_str[i]>='A' && input_str[i]<='Z'){
//             countal++;
//         }
//         if(input_str[i]>='0' && input_str[i]<='9'){
//             countnum++;
//         }
//     }
//     printf("%d %d", countal, countnum);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #define MAX_LEN 11
// int main(){
//     char all_strs[33]="\0";
//     char input_str1[MAX_LEN];
//     char input_str2[MAX_LEN];
//     char input_str3[MAX_LEN];
//     scanf("%s %s %s", input_str1, input_str2, input_str3);
//     strcat(all_strs, input_str1);
//     strcat(all_strs, ",");
//     strcat(all_strs, input_str2);
//     strcat(all_strs, ",");
//     strcat(all_strs, input_str3);
//     printf("%s", all_strs);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #define MAX_LEN 21
// int main(){
//     char input_str[MAX_LEN];
//     fgets(input_str,MAX_LEN,stdin);
//     int count=0;
//     int mint=0;
//     char *pos;
//     if ((pos=strchr(input_str, '\n')) != NULL)
//     *pos = '\0';
//     for(int i=0;input_str[i]!='\0';i++){
//         if(input_str[i] >= 'A' && input_str[i] <= 'Z' || input_str[i] >= 'a' && input_str[i] <= 'z' || input_str[i] >= '0' && input_str[i] <= '9' || input_str[i]==' '){
//             input_str[mint]=input_str[i];
//             mint++;
//         }else{
//             count++;
//         }
//     }  
//     input_str[mint]='\0';
//     printf("%d %s", count, input_str);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #define MAX_LEN 21
// struct stu_info{
//     char first[MAX_LEN];
//     char last[MAX_LEN];
//     int age;
//     float weight;
// };
// int main(){
// struct stu_info s;
// scanf("%s %s %d %f", s.first, s.last, &s.age, &s.weight);
// printf("%s %s, %d, %.2f", s.first, s.last, s.age, s.weight);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #define MAX_LEN 21
// int isPalindrome(char *word);
// int main(){
//     char str[MAX_LEN]="\0";
//     scanf("%s", str);
//     int pa=isPalindrome(str);
//     if(pa==1){
//         printf("%s is a palindrome", str);
//     }else{
//         printf("%s is not a palindrome", str);
//     }
//     return 0;
// }
// int isPalindrome(char *word){
//     int len;
//     len=strlen(word);
//         for(int i=0;i<len;i++){
//             if(word[i]!=word[(len-1)-i]){
//                 return 0;
//             }
//         }
//             return 1;
// }

#include<stdio.h>
#define MAX_LEN 16
struct data{
    int book_id;
    char book_name[MAX_LEN];
    int how_au;
    int author1_id;
    char author1[MAX_LEN];
    int author2_id;
    char author2[MAX_LEN];
};
int main(){
    int n;
    scanf("%d", &n);
    struct data arr[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %d", &arr[i].book_id, arr[i].book_name, &arr[i].how_au);
        if(arr[i].how_au==1){
            scanf("%d %s", &arr[i].author1_id, arr[i].author1);
        }
        if(arr[i].how_au==2){
            scanf("%d %s %d %s", &arr[i].author1_id, arr[i].author1, &arr[i].author2_id, arr[i].author2);
        }
    }
    int id;
    scanf("%d", &id);
    for(int i=0;i<n;i++){
        if(id == arr[i].author1_id || id == arr[i].author2_id){
            printf("%d ", arr[i].book_id);
        }
    }   
    return 0;
}


