/*Exercise 1-3. Modify the temperature conversion program
 to print a heading above the table*/

/*First, the program as given*/
/*Second, the output is right justified*/
/*Third, increase accuracy by using floats*/

#include <stdio.h>

/*print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main(void){

    float fahr, cels;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper){
        cels = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, cels);
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

Then this:
  0      -17.8
 20       -6.7
 40        4.4
 60       15.6
 80       26.7
100       37.8
120       48.9
140       60.0
160       71.1
180       82.2
200       93.3
220      104.4
240      115.6
260      126.7
280      137.8
300      148.9
*/

