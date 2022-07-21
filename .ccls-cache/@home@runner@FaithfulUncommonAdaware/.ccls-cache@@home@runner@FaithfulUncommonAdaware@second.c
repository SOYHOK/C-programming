#include <stdio.h>
int main(){
  float num, Total;
  char answer;
  printf("Enter the num1: ");
    scanf("%f",&Total);
  do
  {
    printf("Enter the num2: ");
    scanf("%f",&num);
    Total+= num;
    printf("Total = %f",Total);
    printf("\nDo you want to do again?(y/n): ");
    scanf(" %c",&answer);
 }
    while (answer == 'y');
    return 0;
}