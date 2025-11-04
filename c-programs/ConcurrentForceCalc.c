#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double force, theta;
    double sumFx = 0.0, sumFy = 0.0;
    double resultant, resultantTheta;

    printf("Enter number of concurrent forces: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter force magnitude %d: ", i + 1);
        scanf("%lf", &force);

        printf("Enter angle theta %d (in degrees): ", i + 1);
        scanf("%lf", &theta);

        // Convert degrees to radians
        theta = theta * M_PI / 180.0;

        // Resolve into components
        sumFx += force * cos(theta);
        sumFy += force * sin(theta);
    }

    // Resultant force and angle
    resultant = sqrt(sumFx * sumFx + sumFy * sumFy);
    resultantTheta = atan2(sumFy, sumFx) * 180.0 / M_PI; // back to degrees

    printf("\nResultant Force = %.2f", resultant);
    printf("\nResultant Angle (theta) = %.2f degrees\n", resultantTheta);

    return 0;
}