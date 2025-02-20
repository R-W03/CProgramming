#include <stdio.h>


//double sumStudentGradesSentinel(void);

double avgStudentGradesSentinel(void);

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
    printf("Enter the Grade:");
    scanf("%.2lfn", &grade);
    
        if (grade >= 0) {
            total_grade += grade;
            n_grade++;
        }
    
    }
return n_grade/total_grade;
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

