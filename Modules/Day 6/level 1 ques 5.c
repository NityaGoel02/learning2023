level 1 ques 5

#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

// Function to perform search operation on the array of structures based on name
void searchByName(struct Student* students, int numStudents, const char* searchName) {
    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found!\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found.\n");
    }
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    // Assume the array of structures is already initialized with data

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    // Perform the search operation based on name
    searchByName(students, numStudents, searchName);

    return 0;
}
