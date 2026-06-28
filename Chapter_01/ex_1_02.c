/*Exercise 1-2. Experiment to find out what happens when 
prints's argument string contains \c, where c is some 
character not listed above.*/

#include <stdio.h>

int main(void){
    printf("Hello world\c");
    return 0;
}
/*Compiler throws warning:
"ex_1_02.c:8:24: warning: unknown escape
      sequence '\c' [-Wunknown-escape-sequence]
    8 |     printf("Hello world\c");
      |                        ^~
1 warning generated."
But executable created and runs: "Hello worldc"
("~^" means remove this character?)
