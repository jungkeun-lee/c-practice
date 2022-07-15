#include <stdio.h>

#define STACK_SIZE 20

int main(void) {
  int stack[STACK_SIZE];
  char ch;
  int top = 0;

  while (1) {
    printf("Enter an RPN expression: ");

    if ((ch = getchar()) == 'q')
      return 0;

    while (ch != '=') {
      if (ch >= 48 && ch <= 57)
        stack[top++] = (int)(ch - 48);
      else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        if (top == 1) {
          printf("Not enough operands in expression\n");
          return 0;
        } else {
          switch (ch) {
          case '+':
            stack[top - 2] += stack[top - 1];
            top--;
            break;
          case '-':
            stack[top - 2] -= stack[top - 1];
            top--;
            break;
          case '*':
            stack[top - 2] *= stack[top - 1];
            top--;
            break;
          case '/':
            stack[top - 2] /= stack[top - 1];
            top--;
            break;
          }
        }
      }
      if ((ch = getchar()) == ' ') {
        ch = getchar();
        continue;
      }
    }
    if (top > 1) {
      printf("Expression is too complex\n");
      return 0;
    } else {
      printf("Value of expression: %d\n", stack[0]);
    }
    ch = getchar();
  }
}
