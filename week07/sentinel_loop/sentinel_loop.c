#include <stdio.h>


//double sumStudentGradesSentinel(void);

double avgStudentGradesSentinel(void);
double getGrade(void);


//To Do DONT COUNT -1 AS A GRADE
//DONT DIVIDE BY 0
//Create a function that gets the grade


int main(void) {


//printf("%.2lf", sumStudentGradesSentinel());


printf("%.2lf", avgStudentGradesSentinel());







    return 0;
}

double avgStudentGradesSentinel(void) {
    double grade = 0;
    double total_grade = 0;
    int n_grade = 0;

    while(grade != -1) { //-1 -Sentinel Value
    //Get Grade
    printf("Enter the Grade (-1 to exit):");
    scanf("%lf", &grade);
    grade = getGrade();


        if (grade >= 0) {
            total_grade += grade;
            n_grade++;
        }
    
    }

    if (n_grade == 0) {
        puts("No grades were entered");
        return 0;
    }
return n_grade/total_grade;
}

double getGrade(void) {
    //Return only grades in the range [-1, 100]
    
    double grade;


    //do while loop
    do {
        printf("Enter the Grade (-1 to exit): ");
        scanf("%lf", &grade);
    } while (grade <-1 || grade > 100) {
        puts("INCORRECT GRADE");
    }
    


    

    return grade;
}

for (int i = 15; i <= 45 ; i += 5) {
    printf("i");
}

for (int a = 100; a >= 2; a -- 2) {
    if (a % 2 == 0) {
        printf("a");
    }
}

/* double sumStudentGradesSentinel(void) {
    double grade = 0;
    double total_grade = 0;

    while(grade != -1) { //-1 -Sentinel Value
        //Get Grade
        printf("Enter the Grade:");
        scanf("%lf", &grade);

        total_grade += grade;


    }



    return total_grade;
}
*/

