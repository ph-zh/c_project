#include <stdio.h>

int add(int x, int y) {
    int result = x + y;
    return result;
}

int subtract(int x, int y) {
    int result = x - y;
    return result;
}

int main() {


    int x = 5;
    int y = 6;

    int result = subtract(x,y);
    
    printf("%d", result);



    return 0;
}