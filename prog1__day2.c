Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

  #include<stdio.h>

int main (){

    int a,b;
    printf ("enter a ");
    scanf ("%d",&a);

    printf ("enter b");
    scanf ("%d",&b);

    printf ("area is : %d\n",a*b);
    printf ("perimeter is : %d\n",2*(a+b));

    return 0;
}





PS F:\The ultimate c programme> gcc prog1_day2.c
PS F:\The ultimate c programme> ./a.exe    
enter a 4
enter b5
area is : 20
perimeter is : 18
