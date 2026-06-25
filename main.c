#include <stdio.h>
#include <stdbool.h>

int getMax(int x, int y) {
    if(x >= y) {
        return x;
    } else{
        return y;
    }
}

bool ageCheck(int age) {
    
    if(age >= 18) {
        return true;
    } else {
        return false;
    }
}

double cube(double num) {
    return num * num * num;
}

double square(double num) {
    return num * num;
}

int main() {

    double x = square(2.1);
    double y = square(3.2);
    double z = square(4.3);

    double a = cube(2);
    double b = cube(3);
    double c = cube(4);

    int age = 21;

    int max = getMax(5,3);

    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    printf("%lf\n", a);
    printf("%lf\n", b);
    printf("%lf\n", c);

    if(ageCheck(age)) {
        printf("You may sign up\n");
    } else {
        printf("You must be 18+ to sign up\n");
    }

    printf("%d\n", max);

    return 0;
}