level 1 ques 4

#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

// Function to swap two structures
void swap(struct Student* s1, struct Student* s2) {
    struct Student temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

// Function to sort the array of structures in descending order based on marks
void sortArray(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    // Assume the array of structures is already initialized with data

    // Sort the array of structures in descending order based on marks
    sortArray(students, numStudents);

    // Display the sorted array of structures
    printf("Sorted array of structures (based on marks in descending order):\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
