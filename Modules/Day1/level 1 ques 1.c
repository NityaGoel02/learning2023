level 1 ques 1

using if else
#include <stdio.h>

int findMaxUsingIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int max = findMaxUsingIfElse(num1, num2);

    printf("The maximum number is: %d\n", max);

    return 0;
}

using ternary operator -
#include <stdio.h>

int findMaxUsingTernary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int max = findMaxUsingTernary(num1, num2);

    printf("The maximum number is: %d\n", max);

    return 0;
}

