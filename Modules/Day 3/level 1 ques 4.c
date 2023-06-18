level 1 ques 4

#include <stdio.h>

int findLargestByDeletingDigit(int num) {
    int largest = 0;

    // Iterate over each digit
    for (int i = 0; i < 4; i++) {
        int temp = num / (int)pow(10, i + 1) * (int)pow(10, i) + num % (int)pow(10, i);

        if (temp > largest) {
            largest = temp;
        }
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestByDeletingDigit(num);

    printf("Largest number by deleting a single digit: %d\n", largest);

    return 0;
}
