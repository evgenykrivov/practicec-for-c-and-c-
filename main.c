#include <stdio.h>

int main() {
    int num1, num2, result;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter a second integer: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("Error: division by zero is not possible!\n");
    } else {
        result = num1 / num2;
        printf("The result of dividing %d by %d: %d\n", num1, num2, result);
    }

    return 0;
}
