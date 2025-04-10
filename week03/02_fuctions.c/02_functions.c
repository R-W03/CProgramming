/*
Introduction to functions in c

You cannot create a function inside another function
*/

#include <stdio.h>

//Function Format
// <return_type> <function_name> (<arguments (parameter, inputs)> or empty)
// {
// }

//Function doesn't take any arguments and doesn't return any value
void print_course(void) {
    printf("You are in COP%d\n", 2271);
    return;
}

void draw_circle (void) {

    printf("    *\n");
    printf("  *");
    printf("   *\n");
    printf("   * *\n");
    

    return;
}

void draw_caret (void) {

    printf("   /\\ \n");
    printf("  /  \\ \n");
    printf(" /    \\ \n");

    return;
}


void draw_line (void){

    printf(" ------ \n");

    return;
}

void draw_caret2 (void) {

    printf("   / \\ \n");
    printf("  /   \\ \n");
    return;
}

void draw_triangle (void) {

    printf("   /\\ \n");
    printf("  /  \\ \n");
    printf(" /    \\ \n");
    printf(" ------ \n");


    return;
}
    void draw_stick_figure (void) {
        
        draw_circle();
        draw_triangle();
        draw_caret2();

        return;
    }
int main() {
    //Function Call
    print_course();


    //Code Part 2
    draw_circle();

    draw_caret();

    draw_line();

    draw_caret2();

    draw_triangle();
 


    draw_stick_figure();


    return 0;
}