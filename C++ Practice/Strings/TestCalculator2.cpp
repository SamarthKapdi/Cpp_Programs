#include <iostream>
int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;
    char operation = 0;
    printf("Enter First Number:");
    scanf("%d", &num1);
    printf("Enter an Operator(+,-,*,/):");
    scanf(" %c", &operation);
    printf("Enter Second Number:");
    scanf("%d", &num2);

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        printf("Sum: %d", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Subtraction:%d", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Multiplication:%d", result);
        break;
    case '/':
        if (num2 != 0)
        {

            result = num1 / num2;
            printf("Division:%d", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed. \n");
        }
        break;
    default:
        printf("Error: Invalid operator. \n");
    }
    return 0;
}