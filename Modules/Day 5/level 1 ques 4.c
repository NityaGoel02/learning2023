level 1 ques 4

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNumber;
    char name[50];
    int age;
};

int main() {
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of structures
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));

    // Read data for each student
    for (int i = 0; i < n; i++) {
        printf("\n");
        printf("Enter details for student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &(students + i)->rollNumber);

        printf("Name: ");
        scanf("%s", (students + i)->name);

        printf("Age: ");
        scanf("%d", &(students + i)->age);
    }

    // Display the stored data for each student
    printf("\n");
    printf("Stored data for students:\n");
    for (int i = 0; i < n; i++) {
        printf("\n");
        printf("Details for student %d:\n", i + 1);
        printf("Roll Number: %d\n", (students + i)->rollNumber);
        printf("Name: %s\n", (students + i)->name);
        printf("Age: %d\n", (students + i)->age);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
