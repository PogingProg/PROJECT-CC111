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
	printf("                    --------------------------------------------------------------------------------\n");
    printf("                   | Student Name: %-26s       Status: %-24s|\n", studentName, studentStatus);
    printf("                   | Student Nummber: %-23s       School Year: %-19s|\n", studentNumber, schoolYear);
    printf("                   | Course: %-32s       Year Level: %-20s|\n", course, yearLevel);
    printf("                   |--------------------------------------------------------------------------------|\n");
    printf("                   |  SUBJECT CODE |           DESCRIPTION         |     GRADES     |   EVALUATION  |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE1       |     UNDERSTANDING THE SELF    |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE2       |MATHEMATICS IN THE MODERN WORLD|                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     CC111     |INTRUDUCTION TO COMPUTING WITH |                |               |\n");
    printf("                   |               |    PRUDUCTIVITY TOOLS         |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     CC112     | FUNDAMENTAL O PROGRAMMING 1   |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     PLS       |  PHILTECH LIFE AND SPIRIT     |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE3       |   READING IN THE PHILIPPINE   |                |               |\n");
    printf("                   |               |           HISTORY             |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     PE1       |  PHYSICAL FITNESS 1           |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     NSTP      | NATIONAL SERVICE TRAINNING    |                |               |\n");
    printf("                   |               |          PROGRAM 1            |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE4       |            ETHICS             |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     WST       |  WED SYSTEM AND TECHNOLOGIES  |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE5       |       ART PRECIATION          |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     CC123     |   INTERMEDIATE PROGRAMMING    |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     CSS121    |  COMPUTER SYSTEM SERVICING    |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     PE2       |   PHYSICAL FITNESS 2          |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     NSTP2     |  NATIONAL TRAINING PROGRAM 2  |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     VGD       |   VISUAL GRAPHIC DESIGN       |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    
}

void bscs2() {
    printf("                    --------------------------------------------------------------------------------\n");
	printf("                   | Student Name: %-26s       Status: %-24s|\n", studentName, studentStatus);
	printf("                   | Student Nummber: %-23s       School Year: %-19s|\n", studentNumber, schoolYear);
	printf("                   | Course: %-32s       Year Level: %-20s|\n", course, yearLevel);
	printf("                   |--------------------------------------------------------------------------------|\n");
	printf("                   |  SUBJECT CODE |           DESCRIPTION         |     GRADES     |   EVALUATION  |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |     DS211     |    DISCRETE STRUCTURES 1      |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |     GE6       |    PURPOSIVE COMMUNICATION    |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |     GE7       |    THE CONTEMPORARY WORLD     |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |     FIL1      |KONTEKSTWALISADONG KOMUNIKASYON|                |               |\n");
	printf("                   |               |         SA FILIPINO           |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |    CC214      | DATA STRUCTURES & ALGORITHMS  |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |    GAD211     |     GAME ART DEVELOPMENT      |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |     PE3       |      PHYSICAL FITNESS 3       |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |    CC215      |    INFORMATION MANAGEMENT     |                |               |\n");
	printf("                    --------------------------------------------------------------------------------\n");
	printf("                   |                                  SECOND SEMESTER                               |")
	printf("                    -------------------------------------------------------------------------------- \n");
	printf("                   |  SUBJECT CODE |           DESCRIPTION         |     GRADES     |   EVALUATION  |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |     GE8       | SCIENCE, TECHNOLOGY, & SOCIETY|                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |    DS212      |    DISCRETE STRUCTURES 2      |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |    SAD212     | SYSTEM ANALYSIS & DESIGN      |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |   OOP212      | OBJECT-ORIENTED PROGRAMMING   |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |     FIL2      |          PANITIKAN            |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |   HCI212      | HUMAN-COMPUTER INTERACTION    |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |   AO212       | ARCHITECTURE & ORGANIZATION   |                |               |\n");
	printf("                   |---------------|-------------------------------|----------------|---------------|\n");
	printf("                   |     PE4       |     PHYSICAL FITNESS 4        |                |               |\n");
	printf("                    --------------------------------------------------------------------------------\n");
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

}

void bsoa4() {
    printf("Here's your grades: \n");
}

void btvted1() {
    printf("                    --------------------------------------------------------------------------------\n");
    printf("                   | Student Name: %-26s       Status: %-24s|\n", studentName, studentStatus);
    printf("                   | Student Nummber: %-23s       School Year: %-19s|\n", studentNumber, schoolYear);
    printf("                   | Course: %-32s       Year Level: %-20s|\n", course, yearLevel);
    printf("                   |--------------------------------------------------------------------------------|\n");
    printf("                   |  SUBJECT CODE |           DESCRIPTION         |     GRADES     |   EVALUATION  |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |               |   THE CHILD AND ADOLESCENT    |                |               |\n");
    printf("                   |     FCC101    |    LEARNER AND LEARNER AND    |                |               |\n");  
    printf("                   |               |      LEARNING PRINCIPLES      |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     FCC102    |    THE TEACHING PROFESSION    |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     TLE101    |      TEACHING ICT AS AN       |                |               |\n");
    printf("                   |               |      EXPLANATORY COURSE       |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     TLE102    |     HOME ECONOMICS LITERACY   |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE101     |    PURPOSIVE COMMUNICATION    |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE102     |  READINGS IN THE PHILIPPINE   |                |               |\n");
    printf("                   |               |           HISTORY             |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     PE1       |       PHYSICAL FITNESS 1      |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     NSTP1     | NATIONAL SERVICE TRAINNING    |                |               |\n");
    printf("                   |               |          PROGRAM 1            |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE103     |      MATHEMATICS IN THE       |                |               |\n");
    printf("                   |               |         MODERN WORLD          |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |               |   BUILDING AND ENHANCING NEW  |                |               |\n");
    printf("                   |               |   LITERACY ACROSS THE CURRI-  |                |               |\n");
    printf("                   |     PCK101    |   CULUM WITH EMPAHIS ON THE   |                |               |\n");
    printf("                   |               |      21ST CENTURY SKILLS      |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     FCC103    |   FOUNDATION OF SPECIAL AND   |                |               |\n");
    printf("                   |               |      INCLUSIVE EDUCATION      |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GEE1      |     ENVIRONMENTAL SCIENCE     |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE104     |     UNDERSTANDING THE SELF    |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     GE105     |    THE CONTEMPORARY WORLD     |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     NSTP2     |  NATIONAL TRAINING PROGRAM 2  |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     TLE103    |  INTRODUCTION TO INDUSTRIAL   |                |               |\n");
    printf("                   |               |             ARTS              |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     MAJOR1    |    OCCUPATIONAL SAFETY AND    |                |               |\n");
    printf("                   |               |        HEALTH PRACTICES       |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     PE2       |       PHYSICAL FITNESS 2      |                |               |\n");
    printf("                   |---------------|-------------------------------|----------------|---------------|\n");
    printf("                   |     NSTP2     | NATIONAL SERVICE TRAINNING    |                |               |\n");
    printf("                   |               |          PROGRAM 2            |                |               |\n");
	printf("                    --------------------------------------------------------------------------------\n");
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

