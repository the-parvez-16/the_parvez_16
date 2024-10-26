#include <stdio.h>

int main(){
  int n1,n2,n3;
  printf("Enter 1st Number : ");
  scanf("%d\n",&n1);
  printf("Enter 2nd Number : ");
  scanf("%d\n",&n2);
  printf("Select Operator :\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder\n");
  scanf("%d\n",&n3);
  int sum=n1+n2,diff=n1-n2,mul=n1*n2,div=n1/n2,rem=n1%n2;
  if(n3 == 1){
    printf("The sum is : %d\n",sum);
  }
  else if(n3 == 2){
    printf("The difference is : %d\n",diff);
  }
  else if(n3 == 3){
    printf("The multiplication is : %d\n",mul);
  }
  else if(n3 == 4){
    printf("The quotient is : %d\n",div);
  }
  else if(n3 == 5){
    printf("The remainder is : %d\n",rem);
  }
  else{
    printf("Invalid Selection");
  }
}
