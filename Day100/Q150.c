#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main() {
    Student *sPtr;

  
  
    sPtr = (Student *)malloc(sizeof(Student));

    if (sPtr == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }

    printf("Student allocated dynamically with details: Tina 105 88\n");

    
    
    strcpy(sPtr->name, "Tina");
    sPtr->roll_no = 105;
    sPtr->marks = 88.0f;

    
    printf("Output 1:\n");
    printf("Name: %s | Roll: %d | Marks: %.0f\n",
           sPtr->name, sPtr->roll_no, sPtr->marks);

    
    free(sPtr);
    sPtr = NULL;

    return 0;
}