#include <stdio.h>

int main(void) {


    //Get the uppercase character
    char input;

    do {
        printf("Enter an uppercase character: ");
        scanf(" %c", &input);
    } while(input < 'A' || input > 'Z');


    char input2;

    do {
        printf("Enter * or #: ");
        scanf(" %c", &input2);
    } while(input < 'A' || input > 'Z');

    //Get the positive Integer
    int number;

    do {
        printf("Enter an positive number: ");
        scanf(" %d", &number);
    } while(number <= 0);
    

    //Print the scanned char the integer number of times (for loop)
    //A
    //5
    //AAAAA

    for (int i = 1; i <= number; i++) {
        printf("%c", input);
        printf("%c", input2);
    }

    
    /* code */
    
    
    //TO DO 
    //Scan a second character which should be either * or # and nothing e
    //Print the pattern
    //B 5 *
    //B*B*B*B*B*
    
    
    
    
    
    
    
    
    
    //Advanced pattern
    
    
    
    
    
    
    return 0;
}