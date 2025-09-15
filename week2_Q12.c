//Write a program to find the student with the highest marks from an array of structures. 
#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    int n;

    // Ask for number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    // Declare an array of Student structures
    struct Student students[n];

    // Input student information
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find the student with highest marks
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

    // Display student with highest marks
    printf("\nStudent with the highest marks:\n");
    printf("Name    : %s\n", students[maxIndex].name);
    printf("Roll No : %d\n", students[maxIndex].rollNo);
    printf("Marks   : %.2f\n", students[maxIndex].marks);

    return 0;
}
