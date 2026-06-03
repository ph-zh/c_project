#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {

    SetConsoleCP(CP_UTF8);

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius,2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area: %.2lf cm³\n", area);
    printf("Surface cm³ area: %.2lf cm³\n", surfaceArea);
    printf("Volume area: %.2lf cm³\n", volume);

    return 0;
}