level 2 ques 2
#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int size) {
    int matchCount = 0;

    for (int i = 0; i < size; i++) {
        int currentItem = boxA[i];
        int found = 0;

        for (int j = 0; j < size; j++) {
            if (boxB[j] == currentItem) {
                found = 1;
                break;
            }
        }

        if (found == 1) {
            matchCount++;
        }
    }

    return (matchCount == size);
}

int main() {
    int boxA[] = {200, 10, -90};
    int boxB[] = {-90, 200, 10};
    int size = sizeof(boxA) / sizeof(boxA[0]);

    int result = compareBoxes(boxA, boxB, size);

    printf("Result: %d\n", result);

    return 0;
}
