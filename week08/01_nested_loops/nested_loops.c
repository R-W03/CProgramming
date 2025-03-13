#include <stdio.h>
#include <unistd.h>


void printTriangleTopLeftStar(int size);

void printTriangleBottomLeftStar(int size);

void printTriangleBottomLeftNumbers(int size);

void printTriangleTopLeftNumbers(int size);

//TODO

//void printTriangleTopRightStar(int size);

//void printTriangleBottomRightStar(int size);

//void printTriangleBottomRightNumbers(int size);

//void printTriangleTopRightNumbers(int size);


int main(void) {

    int n = 0;

    //Scan a positive integer

    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);

    } while (n <= 0);

int i = 1;
//while (i < 100) {
//    printTriangleTopLeftStar(n);
//    printTriangleBottomLeftStar(n);
//    i++;
//}

printTriangleBottomLeftNumbers(n);

printTriangleTopLeftNumbers(n);

    return 0;
}





/*

        5 
*****
****
***
**
*

*/

void printTriangleTopLeftStar(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size -i; j++) {
            printf("%c", '*');
            usleep(3000);    
        }
        puts(""); // New line after we are done printing a line of *
    }
}



/*
    5
*
**
***
****
*****

*/

void printTriangleBottomLeftStar(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", '*');
            usleep(3000);
        }
        puts(""); // New line after we are done printing a line of *
    }
}
/*
    5
5
54
543
5432
54321

*/

void printTriangleBottomLeftNumbers(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = size ; j >= size -i; j--) {
            printf("%d", j);
            usleep(3000);
        }
        puts(""); // New line after we are done printing a line of *
    }
}


void printTriangleTopLeftNumbers(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0 ; j <= size +i; j++) {
            printf("%d", j);
            usleep(3000);
        }
        puts(""); // New line after we are done printing a line of *
    }
}
