#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

bool areStudentsIdentical(Student s1, Student s2) {
    if (strcmp(s1.name, s2.name) != 0) {
        return false;
    }

    if (s1.roll_no != s2.roll_no) {
        return false;
    }

    if (s1.marks != s2.marks) {
        return false;
    }

    return true;
}

void readStudent(Student *s, const char *prompt) {
    printf("%s:\n", prompt);
    printf("  Enter Name: ");
    if (scanf("%s", s->name) != 1) {
        return;
    }
    printf("  Enter Roll No: ");
    scanf("%d", &s->roll_no);
    printf("  Enter Marks: ");
    scanf("%f", &s->marks);
}

int main() {
    Student student1, student2;

    readStudent(&student1, "Student 1");
    printf("\n");
    readStudent(&student2, "Student 2");
    printf("\n");

    printf("Comparing Students...\n");
    if (areStudentsIdentical(student1, student2)) {
        printf("Output: **Same**\n");
    } else {
        printf("Output: **Different**\n");
    }

    return 0;
}