#include <stdio.h>

int triangleType(int a, int b, int c) {
    if (a + b < c && a + c < b && c + b < a) {
        return 0;
    }
    if (a > b && a > c && b*b + c*c == a*a) {
        return 1;
}
    else if (b > a && b > c && a*a + c*c == b*b) {
        return 1;
}
    else if (c > a && c > b && a*a + b*b == c*c) {
        return 1;
}
    else {
        return 2;
}
    }
int main() {
    int a = 3, b = 4, c = 5;
    int result = triangleType(a, b, c);
    printf("%i", result);
    return 0;
}