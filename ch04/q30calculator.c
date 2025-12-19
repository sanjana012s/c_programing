#include<stdio.h>
int main()
{
  char op;
  int n1, n2, res;

  printf("Enter the op (+, -, *, /): ");
  scanf(" %c", &op);  // 👈 space added here

  printf("Enter the first no: ");
  scanf("%d", &n1);

  printf("Enter the second no: ");
  scanf("%d", &n2);

  switch(op)
  {
    case '+':
      res = n1 + n2;
      printf("add %d", res);
      break;

    case '-':
      res = n1 - n2;
      printf("sub %d", res);
      break;

    case '*':
      res = n1 * n2;
      printf("mul %d", res);
      break;

    case '/':
      if(n2 != 0)
        printf("div %d", n1 / n2);
      else
        printf("Error: Division by zero!");
      break;

    default:
      printf("Invalid operator!");
  }

  return 0;
}
