#include <stdio.h>

int main(void) {
    int years = 18;
    int minutes =  0;

    //Write the prompt
    puts("Enter your age in years:");

    //Get the input
    scanf("%d", &years); 

    //Do the math
    minutes = years * 365 * 24 * 60;
    

    //Create the output
    printf("%d years is %d minutes", years, minutes);

    return 0;
}