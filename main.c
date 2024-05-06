#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    double num1, num2, result;
    printf("The first number: ");
    scanf("%lf", &num1);
    printf("Second number: ");
    scanf("%lf", &num2);

    if (num2 == 0) {
        printf("Error: division by zero is not possible!\n");
    } else {
        result = num1 / num2;
        printf("Division result %.2lf on %.2lf: %.2lf\n", num1, num2, result);
    }

    return 0;
}
