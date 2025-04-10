

#include <stdio.h>

int main(void) {
    int seconds = 0;
    int minutes = 0;
    int remaining_seconds = 0;
    int hours = 0;

    //Get the number of seconds
    puts("Enter the number of seconds");
    scanf("%d",&seconds);

    //Calculate the number of minutes
    minutes = seconds / 60;

    //Hours
    hours = minutes / 60;

    //Remaining seconds
    remaining_seconds = seconds % 60;

    

    //Print the result
    printf("%d seconds is %d  hours or %d minutes and %d seconds\n", seconds, hours, minutes, remaining_seconds);


    //TO DO BY THURSDAY
    //Calculate the number of hours
    return 0;
}