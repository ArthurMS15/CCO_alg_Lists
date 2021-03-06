#include <stdio.h>
#include <math.h>

int main(){
    float radius, height, cylindervol;
    const float PI = 3.14;

    printf("Specify radius value:\n");
    scanf("%f", &radius);
    printf("Specify height value:\n");
    scanf("%f", &height);

    cylindervol = PI*pow(radius,2)*height;
    printf("Cylinder volume is: %.2f\n", cylindervol);
    
    return 0;
}