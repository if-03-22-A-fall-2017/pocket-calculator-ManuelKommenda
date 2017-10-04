#include <stdio.h>
#include <float.h>

double calculat(int input);
int input();
#define DBL_MAX __DBL_MAX__
#define DBL_MIN __DBL_MIN__

int main(int argc, char const *argv[]) {
  int user_input;
  do {
    user_input = input();
    calculat(user_input);
  } while(user_input != -1);


  return 0;
}

int input (){
  int decision;
  int correct_input;
 do {
   printf("Pocket Calculator\n");

   printf("(1) Add ");
   printf("(2) Subtract ");
   printf("(3) Multiply ");
   printf("(4) Divide ");
   printf("(-1) Stop program ");
   scanf("%d", &decision);

   correct_input = 0;
   if (decision > 4 || decision < -1 || decision == 0) {
     printf("Input not allowed, please try again\n");
     correct_input = 1;
   }
 } while(correct_input == 1);
  return decision;
}

double* operants(double numbers[2]){
  printf("First number/Second number: ");
  double number_one;
  double number_two;
  scanf("%lf/%lf", &number_one, &number_two);

  numbers[0] = number_one;
  numbers[1] = number_two;
  return numbers;
}

void add(){
  double numbers[2];
  operants(numbers);
  double result = numbers[0] + numbers[1];

if (result < DBL_MAX && result > DBL_MIN) {
  printf("%.2lf + %.2lf = %.2lf\n", numbers[0], numbers[1], result);
}
else if(result >= DBL_MAX){
  printf("Number overflow\n");
}
else{
  printf("Number underflow\n");
}

}
void subtract(){
  double numbers[2];
  operants(numbers);
  double result = numbers[0] - numbers[1];

  if (result < DBL_MAX && result > DBL_MIN) {
    printf("%.2lf - %.2lf = %.2lf\n", numbers[0], numbers[1], result);
  }
  else if(result >= DBL_MAX){
    printf("Number overflow\n");
  }
  else{
    printf("Number underflow\n");
  }

}
void multiply(){
  double numbers[2];
  operants(numbers);
  double result = numbers[0] * numbers[1];

  if (result < DBL_MAX && result > DBL_MIN) {
    printf("%.2lf * %.2lf = %.2lf\n", numbers[0], numbers[1], result);
  }
  else if(result >= DBL_MAX){
    printf("Number overflow\n");
  }
  else{
    printf("Number underflow\n");
  }


}
void divide(){
  double numbers[2];
  operants(numbers);
  double result = numbers[0] / numbers[1];
  if (numbers[1] != 0) {
    if (result < DBL_MAX && result > DBL_MIN) {
      printf("%.2lf / %.2lf = %.2lf\n", numbers[0], numbers[1], result);
    }
    else if(result >= DBL_MAX){
      printf("Number overflow\n");
    }
    else{
      printf("Number underflow\n");
    }

  }
  else{
    printf("Division by zero\n");
  }
}

double calculat(int input){
  switch (input) {
    case 1: add(); break;
    case 2: subtract(); break;
    case 3: multiply(); break;
    case 4: divide(); break;
    case -1:;
  }
  return 0;
}
