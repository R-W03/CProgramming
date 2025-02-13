/*Practice with a non-void funtions
*/

#include <stdio.h>

//Function Protottypes
//The function named getFive which returns an integer and takes no arguments
int getFive(void);

// A function named printCourse which returns nothing 
//Takes one integer argument
void printCourse(int course_number);

//Void function that takes an integer
//Describes the weather
void describeWeather(int temp);

//The function that converts the given number of miles to kilometers
double milesToKms(int miles);

//The function that converts the give number of kilometers to miles
double kmsToMiles(int kms);

int main(void) {
    int var = 0;

    //Call getFive function
    var = getFive();

    printf("var is %d\n", var);


    //CallprintCourse function
    printCourse(2271);


    //Test describeWeather
    int temp = 0;
    printf("Enter temperature:");
    scanf("%d", &temp);
    describeWeather(temp);


    //Test miles
    int miles = 0;
    printf("Enter number of miles:");
    scanf("%d", &miles);

    //Test kms
    /*int kms = 0;
    printf("Enter number of kilometers:");
    scanf("%d", &kms); */

    return 0;
}


// getFive implementation
int getFive(void) {
    int five = 5;

    return five;
}

/***************************************************/

void printCourse(int course_number) {
    printf("You are in COP%d course. \n ", course_number);
}

/***************************************************/

void describeWeather(int temp) {
    //if statements
    if(temp > 70) {
        puts("HOT");
    }
    if(temp <= 70) {
        puts("COLD");
    }
}

/***************************************************/

double milesToKms(int miles) {
    double kms = miles *1.609;
    
    return 0;
}

double kmsToMiles(int kms) {
    double miles = kms/1.609;

    return 0;
}
