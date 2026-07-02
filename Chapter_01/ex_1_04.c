/*Exercise 1-4. Write a program to print the corresponding 
Celsius to Fahrenheit table.*/

#include <stdio.h>

/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main(void){

    float fahr, cels;
    float lower, upper, step;

    lower = -20;
    upper = 160;
    step = 20;

    cels = lower;
    
    printf("Celsius to Fahrenheit\n");

    while (cels <= upper){
        fahr = cels*(9.0/5.0) + 32;
        printf("%3.0f\t%6.1f\n", cels, fahr);
        cels = cels + step;
    }

}

/*oC=(5/9)(oF-32)
oF=oC(9/5)+32

Output =
Celsius to Fahrenheit
-20       -4.0
  0       32.0
 20       68.0
 40      104.0
 60      140.0
 80      176.0
100      212.0
120      248.0
140      284.0
160      320.0
*/
