#include <stdio.h>

double calculat(int input);
int input();

int main(int argc, char const *argv[]) {
  int user_input;
  user_input = input();
  calculat(user_input);

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

void add(){
  printf("What numbers do you want to add\n");
  printf("First number/Second number: ");
  double number_one;
  double number_two;
  scanf("%lf/%lf", &number_one, &number_two);

  printf("%.2lf + %.2lf = %.2lf\n", number_one, number_two, number_one + number_two);
}
void subtract(){
  printf("What numbers do you want to subtract\n");
  printf("First number/Second number: ");
  double number_one;
  double number_two;
  scanf("%lf/%lf", &number_one, &number_two);

  printf("%.2lf - %.2lf = %.2lf\n", number_one, number_two, number_one - number_two);
}
void multiply(){
  printf("What numbers do you want to multiply\n");
  printf("First number/Second number: ");
  double number_one;
  double number_two;
  scanf("%lf/%lf", &number_one, &number_two);

  printf("%.2lf * %.2lf = %.2lf\n", number_one, number_two, number_one * number_two);
}
void divide(){
  printf("What numbers do you want to divide\n");
  printf("First number/Second number: ");
  double number_one;
  double number_two;
  scanf("%lf/%lf", &number_one, &number_two);
  printf("%.2lf / %.2lf = %.2lf\n", number_one, number_two, number_one / number_two);
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
