#include <stdio.h>
#include <string.h>
#include <stdbool.h>


#define SIZE 1000



void getString(char *str);
void getString2(char *str);
void getString3(char *str);
bool hasSpaces(const char *str);


//TODO
/*
Hello, 5 -> HelloHelloHelloHelloHello
*/
void makeDuplicates(char *str, int n);


//TODO 
//Check Whether the given string is valid
/*
    Has at least one upper and lower case
    Has at least one digit
    Has no spaces or tabs
    Has {*, $, %, &}
    The length is not less than 8
*/



int main(void)  {
    char str1[SIZE];
    char str2[SIZE];

    //getString(str);
    //getString2(str);
    getString3(str1);



    //Check does the string have spaces
    /*if (strchr(str, ' ') == 0) {
        puts("No Spaces");
    }
    else {
        puts("There is a space");
    }
    */

    printf("The first string is \"%s\"\n", str1);
    printf("The second string is \"%s\"\n", str2);


    //Copy one string into another
    strcpy(str1, str2);

    printf("The first string is \"%s\"\n", str1);
    printf("The second string is \"%s\"\n", str2);

    //Add the strings together
    strcat(str1, str2);
    printf("The first string is \"%s\"\n", str1);
    printf("The second string is \"%s\"\n", str2);





    return 0;
}


void getString(char *str) {
    puts("Enter a string");
    scanf("%s", str);
}

void getString2(char *str) {
    puts("Enter a string");
    fgets(str, SIZE -1, stdin); //stdin - Standard input (Keyboard)
    //Remove the ending \n

    int last_character = strlen(str) - 1;   //Index of the last character
    str[last_character] = '\0'; 
}

void getString3(char *str) {
    int i = 1;
    char c = getchar(); //GetChar scans one character
    while (i < SIZE - 1 && c != '\n') {
        str[i] = c;
        i++;
        c = getchar();
    }
    str[i] = '\0';
}


bool hasSpaces (const char *str) {

    //Check does the string have spaces
    if (strchr(str, ' ') == 0) {
        puts("No Spaces");
        return false;
    }
    else {
        puts("There is a space");
        return true;
    }
}

void makeDuplicates(char *str, int n) {
    
}