/*Exercise 1-7. Write a program to print the value of EOF.*/

#include <stdio.h>

int main(void){

    int c;

    printf("Press CTRL + D for EOF\n");

    c = getchar();

    printf("Integer value = %d\n", c);

}
