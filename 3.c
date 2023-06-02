#include <stdio.h>

int main () {
    int n;
    float summ = 0, count = 0;
    scanf("%i", &n);
    while (n != 0) {
        if (n % 2 == 0) {
            summ += n;
            count ++;
        }
        printf("%f %f", summ, count);
        scanf("%i", &n);
    }
    printf("%f", summ / count);
    return 0;
}


