#include <stdio.h>
#include <unistd.h>
#include <conio.h>

// EOG REQUEST.

char year; // Declare globally to use in both functions

void yearLevel() {
    printf("WHAT'S YOUR YEAR LEVEL: \n");
    printf("[1] 1ST YEAR \n");
    printf("[2] 2ND YEAR \n");
    printf("[3] 3RD YEAR \n");
    year = getch();
}

void bscs1() {
    printf("Here's your grades: \n");
}

void bscs2() {
    printf("Here's your grades: \n");
}

void bscs3() {
    printf("Here's your grades: \n");
}

void bscs4() {
    printf("Here's your grades: \n");
}

void bsoa1() {
    printf("Here's your grades: \n");
}

void bsoa2() {
    printf("Here's your grades: \n");
}

void bsoa3() {
    printf("Here's your grades: \n");
}

void bsoa4() {
    printf("Here's your grades: \n");
}

void btvted1() {
    printf("Here's your grades: \n");
}

void btvted2() {
    printf("Here's your grades: \n");
}

void btvted3() {
    printf("Here's your grades: \n");
}

void btvted4() {
    printf("Here's your grades: \n");
}

int main() {
    char course;
    
    printf("WHAT'S YOUR COURSE: \n");
    printf("[1] BS Computer Science \n");
    printf("[2] BS Office Administration \n");
    printf("[3] BT Vocational Teacher Education \n");
    
    course = getch();
    
    yearLevel();
    
    switch (course) {
        case '1': 
            printf("You chose BS Computer Science.\n");
            switch (year) {
                case '1':
                    bscs1();
                    break;
                case '2':
                    bscs2();
                    break;
                case '3':
                    bscs3();
                    break;
                case '4':
                    bscs4();
                    break;
                default:
                    printf("Invalid year level.\n");
                    break;
            }
            break;
        case '2':
            printf("You chose BS Office Administration.\n");
            switch (year) {
                case '1':
                    bsoa1();
                    break;
                case '2':
                    bsoa2();
                    break;
                case '3':
                    bsoa3();
                    break;
                case '4':
                    bsoa4();
                    break;
                default:
                    printf("Invalid year level.\n");
                    break;
            }
            break;
        case '3':
            printf("You chose BT Vocational Teacher Education.\n");
            switch (year) {
                case '1':
                    btvted1();
                    break;
                case '2':
                    btvted2();
                    break;
                case '3':
                    btvted3();
                    break;
                case '4':
                    btvted4();
                    break;
                default:
                    printf("Invalid year level.\n");
                    break;
            }
            break;
        default:
            printf("Invalid course selection.\n");
            break;
    }
    
    return 0;    
}

