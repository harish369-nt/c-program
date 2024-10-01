#include <stdio.h>
int main(){
  char A,B,C,D,E,F,grade;
  printf("enter your grade");
  scanf("%c",&grade);
  switch(grade){
    case "A" :
      printf("you passed in first class");
      break;
    case "B" :
      printf("you passed in second class");
      break;
    case "C" :
      printf("you passed ");
      break;
    case "D" :
      printf("you just passed");
      break:
    case "E" :
      printf("border pass");
      break;
    case "F" :
      printf("you failed better luck next time");
  return 0;
}
