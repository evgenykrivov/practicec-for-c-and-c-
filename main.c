#include <stdio.h>

int main() {
    double num1, num2, result;

    printf("Enter the first real number: ");
    scanf("%lf", &num1);

    printf("Enter the second real number: ");
    scanf("%lf", &num2);

    if (num2 == 0) {
        printf("Error: Division by zero is not possible!\n");
    } else {
        result = num1 / num2;
        printf("The result of dividing %.2lf by %.2lf is equal to: %.2lf\n", num1, num2, result);
    }

    return 0;
}

