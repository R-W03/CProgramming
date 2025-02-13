#include <stdio.h>

int main(void) {
    //int sum = 7+3*6/2-5%2;
    //printf("%d", sum);
    //printf("Welcome to \"COP 2271\" \nAssignment 2 \nLet's CODE\\Program!\n");
    //printf("\nLet's CODE\\Program!\n");

    int favNumber = 0;
    int birthYear =0;
    int product;
    printf("Enter your favorite number:");
    scanf("%d", &favNumber);

    printf("Enter your birth year:");
    scanf("%d", &birthYear);

    product = favNumber * birthYear;
    printf("Product of the two entered numbers is: %d", product);
}