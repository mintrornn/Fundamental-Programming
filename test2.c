#include <stdio.h>

int main(void)
{
 int i, j,  cnt, mode;
 int temp_mode, temp_cnt;

 int n = 0;
 int max = 0;

  printf("Please type any integer for the size of arry-->");
  scanf("%d", &n);
  printf("%d\n", n);
  int a[n];

 for (int i = 0; i < n; i++) {
   printf("--->");
   scanf("%d",  &a[i]);
 }

//initial setting of variables
 mode = 0;
 cnt = 0;
 //comparing numbers listed in the array from the first, so the i starts from 0(below)
 for(i = 0; i < n; i++){
   //initial setting for "temp_cnt"
   temp_cnt = 1;
   //j starts from i + 1 to omit, comparing with others.
  for(j = i + 1; j < n; j++){
    // if the number of in the array[i] equal to array[j], increment as temp_cnt
    if( a[i] == a[j]){
      temp_cnt++;
    }
    //repeating this procedure until last number comes (n) as you assigned at the begging
  }
  // if temp_cnt is larger than cnt, replacing with current count to refresh that.
  if( temp_cnt > cnt){
   cnt = temp_cnt;
   mode = a[i];
  }
 }

 printf("mode ： %d\n", mode);
 printf("times : %d\n", cnt);

 return 0;
}
