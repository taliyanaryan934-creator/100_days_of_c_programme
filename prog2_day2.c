#include <stdio.h>

int main(){
    float radius, area , circumference;
    
    printf("Enter radius of circle: ");
    scanf("%f" , &radius);
    
    area = 3.14 * radius * radius;
    
    circumference = 2 * 3.14 * radius;
    
    printf("The area of circle is: %.2f ", area);
    printf("The circumference of circle is: %.2f" , circumference);
    return 0;
}
