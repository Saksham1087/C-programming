#include <stdio.h>
#include <math.h> 

float calculateForceOfGravity(float m1) {
    
    const double G = 6.674e-11;
    
    const double M_earth = 5.972e24;
    
    const double R_earth = 6.371e6;

    
    double denominator = R_earth * R_earth;
    float force = (G * m1 * M_earth) / denominator;

    return force;
}

int main() {
    float mass;
    float final_force;

    printf("Enter the mass of the body in kilograms: ");
    scanf("%f", &mass);

    
    final_force = calculateForceOfGravity(mass);

    printf("The gravitational force of Earth on a body of mass %.2f kg is: %.2f N\n", mass, final_force);

    return 0;
}