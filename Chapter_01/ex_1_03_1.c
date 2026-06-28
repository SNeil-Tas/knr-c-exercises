/*Exercise 1-3. Modify the temperature conversion program
 to print a heading above the table*/

/*First, the program as given*/
/*Second, the output is right justified*/

#include <stdio.h>

/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main(void){

    int fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper){
        cels = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, cels);
        fahr = fahr + step;
    }

}

/*oC=(5/9)(oF-32)*/

/* outputs:
0       -17
20      -6
40      4
60      15
80      26
100     37
120     48
140     60
160     71
180     82
200     93
220     104
240     115
260     126
280     137
300     148

Becomes this:
  0        -17
 20         -6
 40          4
 60         15
 80         26
100         37
120         48
140         60
160         71
180         82
200         93
220        104
240        115
260        126
280        137
300        148
*/
