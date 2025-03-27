#include <stdio.h>
#include <stdbool.h>


/*
    Checks if the given character an uppercase.
*/
bool isUpper(char c);


/*
    Checks if the given character an lowercase.
*/
bool isLower(char c);

/*
    Checks is the given character a letter    
*/
bool isAlpha(char c);

/*
    Checks is the given character a letter or a digit.  
*/
bool isAlNum(char c);

char toLower(char c);


void printReversedCase (const char *str);




int main(void) {

    //Create a character
    //char ch = 'B';


    //Create a boolean variable
    //const bool isHappyAfterSecondExamInIntroClass = true; //false



    //Test is a charcter
    //printf("isAlpha(%c) = %d\n", ch, isAlpha(ch));

    //Test is Upper
    //printf("isUpper(%c) = %d\n", ch, isUpper(ch));

    //Test is Lower
    //printf("isLower(%c) = %d\n", ch, isLower(ch));

    //Test is a charcter or digit
    //printf("isAlNum(%c) = %d\n", ch, isAlNum(ch));



    ///////////////////////////
    //Create a string
    char str[] = "HeLlO ThErE!";

    //Print the string
    puts("Printing with printf");
    printf("%s\n\n", str);

    puts("Printing with a loop");
    for (int i = 0; str[i] != '\0'; i++) {//str[i] != '0\' - Continue to till the end of the string
        printf("%c", str[i]);
    }
    puts("\n");

    puts("Printing with puts");
    puts(str);
    puts("\n");


    puts("Print the string in lowercase");
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toLower(str[i]));
    }








    return 0;
}






bool isUpper(char c) {
    if (c >= 'A' && c <= 'Z') {
        return true;
    }
    else { 
        return false;
    }
}


bool isLower(char c) {
    if (c >= 'a' && c <= 'z') {
        return true;
    }
    else { 
        return false;
    }
}


bool isAlpha(char c) {
    if (isUpper(c) == true || isLower(c) == true) {
        return true;
    }
    else {
        return false;
    }
}


bool isAlNum(char c) {
    if (isAlpha(c) == true || (c>= '0' && c <= '9') == true) {
        return true;
    }
    else {
        return false;
    }
}

char toLower(char c) {
    if (isUpper(c) == true) {
        return c + 32;
    }
    else {
        return c;
    }
}

void printReversedCase (const char *str) {
    if (isUpper(c) == true) {
        return c + 32;
    }
    else {
        return c - 32;
    }
}