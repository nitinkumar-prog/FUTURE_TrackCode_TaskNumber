//Write a program to store and display information of 5 students using structures.
#include <stdio.h>

// Define a structure for Student
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    // Array of 5 students
    struct Student students[5];

    // Input student information
    printf("Enter information of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display student information
    printf("\n--- Student Information ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name      : %s\n", students[i].name);
        printf("Roll No   : %d\n", students[i].rollNo);
        printf("Marks     : %.2f\n", students[i].marks);
    }

    return 0;
}
