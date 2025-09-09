/*
Task 10:Swapping Variables
● Write a program to swap two variables using a third variable.
● Repeat the program again without using a third variable.
*/

#include <stdio.h>

int main(){
    int varX = 7;
    int varY = 19;
    printf("BEFORE SWAP\n");
    printf("varX: %d    varY: %d\n",varX,varY);

//Swapping using a third variable:
    int temp = varX;
    varX = varY;
    varY = temp;
    //Verifying result:
    printf("AFTER SWAP USING THIRD VARIABLE\n");
    printf("varX: %d    varY: %d\n",varX,varY);

//Swapping without a third variable:
    varX = varX + varY;
    varY = varX - varY;
    varX = varX - varY;
    //Verifying result:
    printf("AFTER SWAP WITHOUT USING THIRD VARIABLE\n");
    printf("varX: %d    varY: %d\n",varX,varY);

    return 0;
}
