
#include<stdio.h>
int main()
{
  int score;
  scanf("%d", &score);
  if(score>=80)
    printf("A\n");
  else if(score>=70 && score<=79)
    printf("B\n");
  else if(score>=60 && score<=69)
    printf("C\n");
  else if(score<=59)
    printf("F\n");
  return 0;
}