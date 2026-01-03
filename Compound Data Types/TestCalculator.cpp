#include <cstdio>
int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;
    char operation;
    printf("Enter First Number:");
    scanf("%d", &num1);

    printf("Enter an operator (+,-,*,/):");
    scanf(" %c", &operation);

    printf("Enter Second Number:");
    scanf("%d", &num2);

    switch (operation)
    {
    case '+':
        result = num1 + num2;
        printf("Sum: %d \n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Subtraction: %d \n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Multiplication: %d \n", result);
        break;
    case '/':
        if (num2 != 0) // Added a check to avoid division by zero
        {
            result = num1 / num2;
            printf("Division: %d \n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid operator.\n");
        break;
    }
    return 0;
}