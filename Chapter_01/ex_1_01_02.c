/*Exercise 1-1. Run the ``hello, world'' program on your
 system. Experiment with leaving out parts of the program,
 to see what error messages you get.*/

#include <stdio.h>

int main(void){
    printf("Hello, world\n");
}

/*Removed main return statement. Because of the C99
standard, the compiler automatically inserts it. Best
practices dictate always including it however*/
