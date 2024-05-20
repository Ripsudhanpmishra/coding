#include <stdio.h>
struct Student {
    char name[50];
    int marks_subject1;
    int marks_subject2;
    int marks_subject3;
    int marks_subject4;
    int marks_subject5;
    int total_marks;
};

int main() {
    int num_students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct Student students[num_students];

    for (int i = 0; i < num_students; ++i) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks in Subject 1: ");
        scanf("%d", &students[i].marks_subject1);
        printf("Marks in Subject 2: ");
        scanf("%d", &students[i].marks_subject2);
        printf("Marks in Subject 3: ");
        scanf("%d", &students[i].marks_subject3);
        printf("Marks in Subject 4: ");
        scanf("%d", &students[i].marks_subject4);
        printf("Marks in Subject 5: ");
        scanf("%d", &students[i].marks_subject5);


        students[i].total_marks = students[i].marks_subject1 +
                                  students[i].marks_subject2 +
                                  students[i].marks_subject3 +
                                  students[i].marks_subject4 +
                                  students[i].marks_subject5;
    }

    printf("\n\nDisplaying Marks:\n");
    for (int i = 0; i < num_students; ++i) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Marks in Subject 1: %d\n", students[i].marks_subject1);
        printf("Marks in Subject 2: %d\n", students[i].marks_subject2);
        printf("Marks in Subject 3: %d\n", students[i].marks_subject3);
        printf("Marks in Subject 4: %d\n", students[i].marks_subject4);
        printf("Marks in Subject 5: %d\n", students[i].marks_subject5);
        printf("Total Marks: %d\n", students[i].total_marks);
    }

    int max_subject1 = students[0].marks_subject1;
    int min_subject1 = students[0].marks_subject1;
    int max_subject2 = students[0].marks_subject2;
    int min_subject2 = students[0].marks_subject2;
    int max_subject3 = students[0].marks_subject3;
    int min_subject3 = students[0].marks_subject3;
    int max_subject4 = students[0].marks_subject4;
    int min_subject4 = students[0].marks_subject4;
    int max_subject5 = students[0].marks_subject5;
    int min_subject5 = students[0].marks_subject5;

    for (int i = 1; i < num_students; ++i) {
        if (students[i].marks_subject1 > max_subject1) {
            max_subject1 = students[i].marks_subject1;
        }
        if (students[i].marks_subject1 < min_subject1) {
            min_subject1 = students[i].marks_subject1;
        }

         if (students[i].marks_subject2 > max_subject2) {
            max_subject2 = students[i].marks_subject2;
        }
        if (students[i].marks_subject2 < min_subject2) {
            min_subject2 = students[i].marks_subject2;
        }

         if (students[i].marks_subject3 > max_subject3) {
            max_subject3 = students[i].marks_subject3;
        }
        if (students[i].marks_subject3 < min_subject3) {
            min_subject3 = students[i].marks_subject3;
        }

        if (students[i].marks_subject4 > max_subject4) {
            max_subject4 = students[i].marks_subject4;
        }
        if (students[i].marks_subject4 < min_subject4) {
            min_subject4 = students[i].marks_subject4;
        }

        if (students[i].marks_subject5 > max_subject5) {
            max_subject5 = students[i].marks_subject5;
        }
        if (students[i].marks_subject5 < min_subject5) {
            min_subject5 = students[i].marks_subject5;
        }
    }

    printf("\n\nHighest and Lowest Marks in Each Subject:\n");
    printf("Subject 1: Highest = %d, Lowest = %d\n", max_subject1, min_subject1);
    printf("Subject 2: Highest = %d, Lowest = %d\n", max_subject2, min_subject2);
    printf("Subject 3: Highest = %d, Lowest = %d\n", max_subject3, min_subject3);
    printf("Subject 4: Highest = %d, Lowest = %d\n", max_subject4, min_subject4);
    printf("Subject 5: Highest = %d, Lowest = %d\n", max_subject5, min_subject5);
   
   return 0;
}
