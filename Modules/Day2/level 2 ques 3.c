level 2 ques 3
#include <stdio.h>
#include <string.h>

void sortNames(char *names[], int size) {
    int i, j;
    char *temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

void printNames(char *names[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int size = sizeof(names) / sizeof(names[0]);

    printf("Original Names:\n");
    printNames(names, size);

    sortNames(names, size);

    printf("\nSorted Names:\n");
    printNames(names, size);

    return 0;
}
