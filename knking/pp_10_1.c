#include <stdio.h>
#include <stdlib.h>

void stack_underflow(void);

int main(void) {
  char ch;
  char stack[20];
  int top = 0;
  printf("Enter parentheses and/or braces: ");
  while ((ch = getchar()) != '\n') {
    if (ch == '(' || ch == '{')
      stack[top++] = ch;
    else if (ch == ')') {
      if (top == 0) {
        stack_underflow();
      } else {
        if (stack[top - 1] == '(')
          top--;
        else {
          printf("Parentheses/braces are not nested properly\n");
          return 0;
        }
      }
    } else if (ch == '}') {
      if (top == 0) {
        stack_underflow();
      } else {
        if (stack[top - 1] == '{')
          top--;
        else {
          printf("Parentheses/braces are not nested properly\n");
          return 0;
        }
      }
    } else {
      printf("only parentheses or braces are allowed\n");
      return 0;
    }
  }
  if (top == 0)
    printf("Parentheses/braces are nested properly\n");
  else
    printf("Parentheses/braces are not nested properly\n");

  return 0;
}

void stack_underflow(void) {
  printf("Stack underflow\n");
  exit(EXIT_SUCCESS);
}
