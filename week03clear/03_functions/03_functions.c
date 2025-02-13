#include <stdio.h>

    void one_three(void) {
        puts("one");
        two();
        puts("three");
        return;
    }

    void two(void) {
            puts("two");

        return;
    }


    int main() {

        puts("Starting now");
        //Function Call

        one_three();

        two();
        puts("Done");
        

    }