/*
Task 9: Users Information
● Write a C program that asks the user&#39;s name and age and print them use escape sequences as well.
*/

#include <stdio.h>

int main(){
    char userName[15];
    int userAge;
    printf("Enter your name ");
    scanf("%s",userName);
    printf("Enter your age ");
    scanf("%d",&userAge);
    printf("Name:\t%s\a\n",userName);
    printf("Age:\t%d\a",userAge);
    return 0;
}
