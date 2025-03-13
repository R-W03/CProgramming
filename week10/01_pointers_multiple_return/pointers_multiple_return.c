#include <stdio.h>


/*
    Split the given 2 digit integer into tens and ones
    Return 0 if the number is 2 digit; 1 - otherwise
*/


int splitDigits(int n, int *tens_ptr, int *ones_ptr);

//TODO
void sumAndAvg(double d1, double d2, double *sum, double *avg);


int main(void) {
    int n = 0;
    printf("Enter a 2 digit number: ");
    scanf("%d", &n);

    int tens = 0, ones = 0;
    splitDigits(n, &tens, &ones);

    printf("%d has %d tens and %d ones\n", n, tens, ones);

    //We have ones and tens
    int sum = 0; //Sum of ones and tens
    int avg = 0; //Avg of ones and tens

    sumAndAvg((double) tens, (double) ones, &sum, &avg );
    prinf("The sum %d;\n The average %d\n", sum, avg);

    return 0;
}



int splitDigits(int n, int *tens_ptr, int *ones_ptr) {
    
    //45 / 10 = 4
    //45 % 10 = 5
    if (n <10 || n > 99) {
        puts("Not a 2 digit number"); 
        return 1;
    }
    *tens_ptr = n / 10;
    *ones_ptr = n % 10;
    
    return 0; //Everything is amazing
}


void sumAndAvg(double d1, double d2, double *sum, double *avg) {
d1 = tens_ptr;
d2 = ones_ptr;
sum = d1 + d2;
avg = (*sum)/2;


return 0;
}