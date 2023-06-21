level 1 ques 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

// Function to parse the string and initialize an array of structures
void initializeArray(struct Student* students, const char* inputString, int numStudents) {
    char* token;
    int count = 0;

    // Splitting the input string using strtok
    token = strtok((char*)inputString, " ");
    while (token != NULL && count < numStudents) {
        students[count].rollno = atoi(token);

        token = strtok(NULL, " ");
        strcpy(students[count].name, token);

        token = strtok(NULL, " ");
        students[count].marks = atof(token);

        token = strtok(NULL, " ");
        count++;
    }
}

int main() {
    int numStudents;
    char inputString[100];

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar();  // To consume the newline character

    printf("Enter the input string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strlen(inputString) - 1] = '\0';  // Remove the trailing newline character

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    // Initialize the array of structures
    initializeArray(students, inputString, numStudents);

    // Display the initialized array of structures
    printf("\nInitialized array of structures:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    free(students);

    return 0;
}
