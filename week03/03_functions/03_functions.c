#include <stdio.h>

//Function Prototypes
    void two(void);
    void one_three(void);

    int main() {

        puts("Starting now");
        //Function Call

        one_three();
        two();
        puts("Done");
    }

    void two(void) {
            puts("two");
    }
void one_three(void) {
        puts("one");
        two();
        puts("three");
    }