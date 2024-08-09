#include <stdio.h>
#include <cmath>
int main(void)
{
    double x;

    // grab the factor from the user.
    printf("Enter num:");
    scanf("%lf", &n);

    // clamp between 0-1.
    if (n < 0.f)
        n = 0.f;

    if ( n > 1.f)
        n = 1.f;

    // output the sine of the factor.
    printf("sine is: %lf\n\n", sin(n));
    return 0;
}