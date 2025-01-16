/*
    The intorduction to variables.
*/

// Preprocessor directive
// stdio.h -Standard input/Output
#include <stdio.h>

//Create a main function
int main(void) {
    //Create a variable
    int first_number;
    // Assign the value to a variable
    first_number = 100;

    // Create and intialize
    int second_number = -19;

    //Print
    printf("The first number is %d\n", first_number);

    //Print
    printf("The second number is %d\n", second_number);

    //Create a sum of two numbers
    int sum = first_number + second_number;

    printf("%d + %d = %d\n", first_number, second_number, sum);

    return 0;
}


#include <stdio.h>

int main (void) {

    int first_value = "John Doe";
    int course_id = 2271;
    int student_id = 10234;
    int difference = student_id - course_id;

    printf("Name: %d", first_value);
    printf("\n Course ID: %d", course_id);
    printf("\n Student ID: %d", student_id);
    printf("\nStudent ID - Course ID is: %d", difference);

return 0;
}