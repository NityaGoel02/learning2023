level 1 ques 5

#include <stdio.h>

// Structure to represent a person
struct Person {
    char name[50];
    int age;
};

// Function to swap the fields of two structures using pointers
void swapFields(struct Person* p1, struct Person* p2) {
    struct Person temp;

    // Swapping name field
    strcpy(temp.name, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, temp.name);

    // Swapping age field
    temp.age = p1->age;
    p1->age = p2->age;
    p2->age = temp.age;
}

int main() {
    struct Person person1, person2;

    // Inputting details for person1
    printf("Enter details for person 1:\n");
    printf("Name: ");
    scanf("%s", person1.name);
    printf("Age: ");
    scanf("%d", &person1.age);

    // Inputting details for person2
    printf("\nEnter details for person 2:\n");
    printf("Name: ");
    scanf("%s", person2.name);
    printf("Age: ");
    scanf("%d", &person2.age);

    printf("\nBefore swapping:\n");
    printf("Person 1:\nName: %s\nAge: %d\n", person1.name, person1.age);
    printf("Person 2:\nName: %s\nAge: %d\n", person2.name, person2.age);

    // Swapping fields of person1 and person2 using pointers
    swapFields(&person1, &person2);

    printf("\nAfter swapping:\n");
    printf("Person 1:\nName: %s\nAge: %d\n", person1.name, person1.age);
    printf("Person 2:\nName: %s\nAge: %d\n", person2.name, person2.age);

    return 0;
}
