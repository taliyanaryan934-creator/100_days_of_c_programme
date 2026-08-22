Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>

int main (){

    int a,b;
    printf ("enter a");
    scanf ("%d",&a);

    printf ("enter b");
    scanf ("%d",&b);

    printf ("sum is : %d\n",a+b);
    printf ("difference is :%d\n",a-b);
    printf ("multiply is : %d\n",a*b);
    printf ("division is : %d\n",a/b);

    return 0;
}






PS F:\The ultimate c programme> gcc prog1_day2.c
PS F:\The ultimate c programme> ./a.exe    
enter a6
enter b5
sum is : 11
difference is :1
multiply is : 30
division is : 1

*/
