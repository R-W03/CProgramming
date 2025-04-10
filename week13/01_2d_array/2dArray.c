#include <stdio.h>



#define ROW 4
#define COL 4


void print(int rows, int cols, const int arr[rows][cols]);
void setRow(int rows, int cols, int arr[rows][cols], int row_num, int val);

void setCol(int rows, int cols, int arr[rows][cols], int cols_num, int val);

int total (int rows, int cols, const int arr[rows][cols]);

/*
    Return the 
*/
int totalPerim(int rows, int cols, const int arr[rows][cols]);


int main(int argc, char*argv[]) {

    //Create and initialize a 2D array of integers
    int arr[ROW] [COL] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    /*

    double arr[ROW] [COL] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    
    double arr 
    


    */









    //Access an Element
    printf("%d\n", arr[1] [1]);


    //Change the Value of the Element
    arr[1] [1] = 10;


    print(ROW, COL, arr);


    setRow(ROW, COL, arr, 0, 66);
    
    //setCol(ROW, COL, arr, 0, 55);
    
    print(ROW, COL, arr);

    printf("The sum is %d\n", total(ROW, COL, arr));



    return 0;
}





void print(int rows, int cols, const int arr[rows][cols]) {
    
    //Print an array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d", arr[i] [j]);
        }
        puts("");
    }
    puts("");
}


void setRow(int rows, int cols, int arr[rows][cols], int row_num, int val) {
    
    //Set the row 
    for (int j = 0; j < cols; j++) {
        arr[row_num] [j] = val;
    }
}

void setCols(int rows, int cols, int arr[rows][cols], int cols_num, int val) {
    
    //Set the column
    for (int i = 0; i < cols; i++) {
        arr[i] [cols] = val;
    }
}

int total (int rows, int cols, const int arr[rows][cols]) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}



int totalPerim(int rows, int cols, const int arr[rows][cols]) {
    int perim = 0;

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            

            
            
            perim += arr[i][j];
        }
    }

    return perim;
}