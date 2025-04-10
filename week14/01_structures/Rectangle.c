#include <stdio.h>


#define NAME_SIZE 30


struct Rectangle rect(double *width, double *height);
double getPerimeter(struct Rectangle rect);
int main(argc, char *argv[]) {

    struct Rectangle r = createRectangle(2.5,3.7);
   
   
    //createRectangle(width, height);
    printf("%lf". getPerimeter(&r));
    
    return 2*(rect->width + rect->height);
}

/*
struct Rectangle createRectangle(double *width, double *height) {
    double *width = 0;
    double *height = 0;
}
*/