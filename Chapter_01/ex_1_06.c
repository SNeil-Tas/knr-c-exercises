/*Exercise 1-6. Verify that the expression getchar() != EOF
 is 0 or 1.*/

#include <stdio.h>

int main(void){

    int c;

    while (c = getchar() != EOF)
        printf("%d\n", c);
}
/*The test is saying "Is c not equal to EOF?" 
 It will only be  0 (false) if c == EOF; but
 then the while loop is finished before the printf can print
 0.
 Note, doesn't reveal anything about the system integer
 representing EOF.
*/
