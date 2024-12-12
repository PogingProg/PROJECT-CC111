#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h> // Include time.h for random number generation

// Function to generate random grades
float generateRandomGrade() {
    float grades[] = {1.0, 1.25, 1.5, 1.75, 2.0, 2.25, 2.5, 2.75, 3.0, 4.0, 5.0};
    int index = rand() % (sizeof(grades) / sizeof(grades[0]));
    return grades[index];
}

// Function to evaluate grades
const char* evaluateGrade(float grade) {
    if (grade == 5.0 || grade == 4.0) {
        return "FAILED";
    } else if (grade <= 3.0) {
        return "PASSED";
    } else {
        return "INCOMPLETE";
    }
}

int main() {
    char course[100], yearLevel[100], studentStatus[20], studentNumber[20], studentName[100], schoolYear[100];
    float ge1Grade, ge2Grade, ge3Grade;

    // Initialize random number generator
    srand(time(0));

    printf("                    --------------------------------------------------------------------------------\n");
    printf("                   |                            EVALUATION OF GRADES REQUEST                         |\n");
    printf("                    --------------------------------------------------------------------------------\n");

    // Get course
    printf("                    Enter your course: ");
    fgets(course, sizeof(course), stdin);
    course[strcspn(course, "\n")] = 0;

    // Get year level
    printf("                    Enter your year level: ");
    fgets(yearLevel, sizeof(yearLevel), stdin);
    yearLevel[strcspn(yearLevel, "\n")] = 0; // Remove trailing newline

    // Get student status
    printf("                    Enter your student status (Regular, Non-Regular): ");
    fgets(studentStatus, sizeof(studentStatus), stdin);
    studentStatus[strcspn(studentStatus, "\n")] = 0; // Remove trailing newline

    // Get student number
    printf("                    Enter your student number: ");
    fgets(studentNumber, sizeof(studentNumber), stdin);
    studentNumber[strcspn(studentNumber, "\n")] = 0; // Remove trailing newline

    printf("                    Enter your student name: ");
    fgets(studentName, sizeof(studentName), stdin);
    studentName[strcspn(studentName, "\n")] = 0; // Remove trailing newline

    printf("                    Enter your school year: ");
    fgets(schoolYear, sizeof(schoolYear), stdin);
    schoolYear[strcspn(schoolYear, "\n")] = 0; // Remove trailing newline

    sleep(2);

    #ifdef _WIN32
        system("cls"); // Windows
    #else
        system("clear"); // Linux/macOS
    #endif
    
    // Generate random grades for the subjects
    ge1Grade = generateRandomGrade();
    ge2Grade = generateRandomGrade();
    ge3Grade = generateRandomGrade();

    printf("                    --------------------------------------------------------------------------------\n");
    printf("                   | Student Name: %-26s       Status: %-24s|\n", studentName, studentStatus);
    printf("                   | Student Number: %-24s       School Year: %-19s|\n", studentNumber, schoolYear);
    printf("                   | Course: %-32s       Year Level: %-20s|\n", course, yearLevel);
    printf("                   |--------------------------------------------------------------------------------|\n");
    printf("                   |  SUBJECT CODE |           DESCRIPTION         |     GRADES     |   EVALUATION  |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE1       |     UNDERSTANDING THE SELF    |     %.2f       |   %-10s  |\n", ge1Grade, evaluateGrade(ge1Grade));
    printf("                   |     GE2       |   READINGS IN PHIL. HISTORY   |     %.2f       |   %-10s  |\n", ge2Grade, evaluateGrade(ge2Grade));
    printf("                   |     GE3       |    PURPOSIVE COMMUNICATION    |     %.2f       |   %-10s  |\n", ge3Grade, evaluateGrade(ge3Grade));
    printf("                   --------------------------------------------------------------------------------\n");

    return 0;
}

