#include<stdio.h>
#include<string.h>
#define MAX_LEN 20
int isPalindrome(char *word);
int main(){
    char word[MAX_LEN];
    scanf("%s", word);
    int ans;
    ans = isPalindrome(word);
    if(ans==1){
        printf("%s is a palindrome", word);
    }else if(ans==0){
        printf("%s is not a palindrome", word);
    }

    return 0;
}
int isPalindrome(char *word){
   int i=0;
   int len = strlen(word); // if word = ANNA len = ???/ len = 4
   while(i < len/2)
   {
       if(word[i] != word[len-1-i]){
           return 0;
       }
       i++;
   }
   return 1;
}