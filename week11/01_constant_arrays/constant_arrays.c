#include <stdio.h>


#define SIZE 10

//Print the double values of the array
void printDoubledArray(const int *arr, int size);

//Searching in arrays (Linear Search)
//Search for the location of the first zero in the array and return it.
//Return -1 if there are no zeros.
int firstZero(const int *arr, int size);
int lastZero(const int *arr, int size);


//Return 1 if there is Even number of zeros 
//Return 0 if there is Odd number of zeros or there are no zeros
int hasEvenZeros(const int *arr, int size);

void nthZero;


int main(void) {
    int a[SIZE] = {1,2,3,4,5,6};


    printDoubledArray(a, SIZE);

    int first_zero = firstZero(a, SIZE);
    if (first_zero == -1) {
        printf("There are no zeros");
    }
    else {
        printf("The index of the first zero is %d\n", first_zero);
    }

    int last_zero = lastZero(a, SIZE);
    if (last_zero == -1) {
        printf("There are no zeros");
    }
    else {
        printf("The index of the last zero is %d\n", last_zero);
    }


    //Get the location of the second 0 in the array
    nthZero(a, SIZE, 2);

    return 0;
}



void printDoubledArray(const int *arr, int size) {
    

    for(int i = 0; i < size; i++) {      
        printf("%d  ", arr[i] * 2);
    }
    puts("");
}


int firstZero(const int *arr, int size) {
    for(int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            return i;
        }
    }

    //No Zeros
    return -1;
}


int lastZero(const int *arr, int size) {
    for(int i = size - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            return i;
        }
    }

    //No Zeros
    return -1;
}


int hasEvenZeros(const int *arr, int size) {
    int n_zeros = 0;

    for (int i = 0; i < size; i++) {
        if (0) {
            n_zeros++;
        }
    }
    if (n_zeros % 2 == 1 || n_zeros == 0) {
        return 0;
    }
    else {
        return 1;
    }
}