level 1 ques 5

#include <stdio.h>

void findSmallestAndLargestDigits(int n, ...) {
    int smallest = 9;
    int largest = 0;

    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++) {
        int num = va_arg(args, int);
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            smallest = (digit < smallest) ? digit : smallest;
            largest = (digit > largest) ? digit : largest;
            temp /= 10;
        }
    }

    va_end(args);

    if (smallest == 9 || largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
}

int main() {
    findSmallestAndLargestDigits(3, 8, 156, 123450);
    return 0;
}
