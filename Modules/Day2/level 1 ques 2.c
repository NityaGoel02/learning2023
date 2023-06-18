Day 2
level 1
Ques 2

#include <stdio.h>

void swap(void *ptr1, void *ptr2, size_t size) {
    char temp[size];

    // Copy the data from ptr1 to temp
    char *tempPtr = (char *)ptr1;
    for (size_t i = 0; i < size; i++) {
        temp[i] = tempPtr[i];
    }

    // Copy the data from ptr2 to ptr1
    tempPtr = (char *)ptr1;
    char *ptr2Ptr = (char *)ptr2;
    for (size_t i = 0; i < size; i++) {
        tempPtr[i] = ptr2Ptr[i];
    }

    // Copy the data from temp to ptr2
    ptr2Ptr = (char *)ptr2;
    for (size_t i = 0; i < size; i++) {
        ptr2Ptr[i] = temp[i];
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2, sizeof(int));

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    double pi = 3.14;
    double e = 2.718;

    printf("Before swapping: pi = %lf, e = %lf\n", pi, e);

    swap(&pi, &e, sizeof(double));

    printf("After swapping: pi = %lf, e = %lf\n", pi, e);

    return 0;
}
