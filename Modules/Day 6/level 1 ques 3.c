level 1 ques 3

#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

// Function to display all members of an array of structures
void displayArray(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    // Assume the array of structures is already initialized with data

    // Display all members of the array of structures
    displayArray(students, numStudents);

    return 0;
}
