#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

void writeEmployeeData(const char *filename) {
    FILE *file;
    Employee emp;
    int n, i;

    file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        exit(1);
    }

    printf("Enter the number of employees to store: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid number of employees.\n");
        fclose(file);
        return;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp.id);

        printf("Name: ");
        while (getchar() != '\n');
        if (fgets(emp.name, sizeof(emp.name), stdin) != NULL) {
            size_t len = 0;
            while(emp.name[len] != '\0') {
                len++;
            }
            if (len > 0 && emp.name[len - 1] == '\n') {
                emp.name[len - 1] = '\0';
            }
        }


        printf("Salary: ");
        scanf("%f", &emp.salary);

        size_t written = fwrite(&emp, sizeof(Employee), 1, file);
        if (written != 1) {
            perror("Error writing employee data to file");
            break;
        }
    }

    printf("\nEmployee details entered and stored in file: **%s**\n", filename);

    fclose(file);
}

void readEmployeeData(const char *filename) {
    FILE *file;
    Employee emp;
    int count = 0;

    file = fopen(filename, "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    printf("\n--- Displays employee data read from file: **%s** ---\n", filename);

    while (fread(&emp, sizeof(Employee), 1, file) == 1) {
        count++;
        printf("Employee %d:\n", count);
        printf("  ID: %d\n", emp.id);
        printf("  Name: %s\n", emp.name);
        printf("  Salary: %.2f\n", emp.salary);
        printf("---\n");
    }

    if (ferror(file)) {
        perror("Error reading data from file");
    } else if (count == 0) {
        printf("The file is empty or no data was successfully read.\n");
    }

    fclose(file);
}

int main() {
    const char *filename = "employee_data.bin";

    writeEmployeeData(filename);
    readEmployeeData(filename);

    return 0;
}