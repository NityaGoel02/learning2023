level 1 ques 4

#include <stdio.h>

int countSetBits(int arr[], int size) {
    int totalBits = 0;

    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int count = 0;

        while (num > 0) {
            if (num & 1) {
                count++;
            }
            num >>= 1;
        }

        totalBits += count;
    }

    return totalBits;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = countSetBits(arr, size);

    printf("Total number of set bits: %d\n", result);

    return 0;
}
