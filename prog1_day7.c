question 13 , Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int year;
    printf("Enter number of days in a year: ");
    scanf("%d", &year);
    
    if ((year / 100) * 100 == year) {

        if ((year / 400) * 400 == year)
         {
            printf("%d is a leap year.\n", year);
        } else 
        
        {
            printf("%d is not a leap year.\n", year);
        }
        
        return 0;
    }
