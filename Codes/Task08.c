/*
Task 8: Percentage Calculator
● Write a C program that asks the user for their marks in 3 subjects.
● Calculate the Percentage.
*/

#include <stdio.h>

int main(){
    int sub1Max, sub2Max, sub3Max, sub1_Obt, sub2_Obt, sub3_Obt;
    printf("Enter the obtained marks for subject 1 ");
    scanf("%d",&sub1_Obt);
    printf("Enter the maximum marks for subject 1 ");
    scanf("%d",&sub1Max);
    printf("Enter the obtained marks for subject 2 ");
    scanf("%d",&sub2_Obt);
    printf("Enter the maximum marks for subject 2 ");
    scanf("%d",&sub2Max);
    printf("Enter the obtained marks for subject 3 ");
    scanf("%d",&sub3_Obt);
    printf("Enter the maximum marks for subject 3 ");
    scanf("%d",&sub3Max);
    int maxSum = sub1Max + sub2Max + sub3Max;
    int obtSum = sub1_Obt + sub2_Obt + sub3_Obt;
    int percentage = ( (float)obtSum / maxSum ) * 100;
    printf("Youe percentage is %d",percentage);
    printf("%%");
    return 0;
}
