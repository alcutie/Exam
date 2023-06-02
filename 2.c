#include <stdio.h>

float sumFoo(int n) {
    float fact = 1, result = 0;
    for (int i=1; i<=n; i++) {
        fact *= i;
        result += i*i / fact;
    }
    return result;
}

int main() {
    int n = 3;
    float result = sumFoo(n);
    printf("%f", result);
    return 0;
}
