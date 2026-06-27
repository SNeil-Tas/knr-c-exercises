/*Exercise 1-1. Run the ``hello, world'' program on your
 system. Experiment with leaving out parts of the program,
 to see what error messages you get.*/

int main(void){
    printf("Hello, world\n");
    return 0;
}
/* Leaving out stdio declaration gives compiler error:
ex_1_01_01.c:6:5: error: call to
      undeclared library function 'printf' with type 'int
      (const char *, ...)'; ISO C99 and later do not support
      implicit function declarations
      [-Wimplicit-function-declaration]
    6 |     printf("Hello, world\n");
      |     ^
ex_1_01_01.c:6:5: note: include the
      header <stdio.h> or explicitly provide a declaration for
      'printf'
1 error generated.
*/
