level 1 ques 5

#include <stdio.h>

int main() {
    int arr[] = {64, 84, 21, 36, 17, 90, 77, 10, 48, 55};
    int len = sizeof(arr) / sizeof(arr[0]);

    int sumEven = 0; 
    int sumOdd = 0;  

    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    int difference = sumEven - sumOdd;

    printf("Sum of elements at even indices: %d\n", sumEven);
    printf("Sum of elements at odd indices: %d\n", sumOdd);
    printf("Difference: %d\n", difference);

    return 0;
}
