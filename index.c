#include <stdio.h>;
#include <math.h>;

int main() {
    const float a = 5;
    const float c = 13;
    float b = 0;
    float r = 0;

    b = sqrt(pow(c, 2) - pow(a, 2));
    r = (a + b - c) / 2;

    printf("%f\n", b);
    printf("%f", r);

    return 0;
}