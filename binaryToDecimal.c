#include <stdio.h>

int main(){
    int binary, decimal=0, base=1, calc;
    //binary is the input
    // decimal is the number to be calculated.
    // the formula is: decimal number = ++(eachBinaryNumber * base according to index)
    // base in the start is 1, since the index is 1
    // calc is a variable to store the number at a specific index
    printf("Enter a binary integer (1s and 0s, max 5):\n");
    scanf("%d", &binary);       //inputs the binary number
    for (;binary>0;){       
        calc = binary % 10;         //if binary is 101, calc becomes 1 (present in the last)
        decimal = decimal + calc*base;  //decimal initially is 0 and gets incremented. Calculate according to formula and add
        binary = binary / 10;   //if binary is 101, it becomes 10 for the next loop check. i.e we are decreasing it untill it reaches to 0.
        base = base * 2;        //increases the base by power 2.
    }
    printf("The number in decimal is:%d", decimal );
    return 0;
}
