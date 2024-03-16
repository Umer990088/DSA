#include <stdio.h>

typedef struct
{
    float r;
    float i;
} Complex;

Complex add(Complex num1, Complex num2)
 {
    Complex result;
    result.r = num1.r + num2.r;
    result.i = num1.i + num2.i;
    return result;
}

int main()
{
    Complex num1, num2, sum;

    printf("Enter real and imaaginary\n");
    scanf("%f %f", &num1.r, &num1.i);

    printf("Enter real and imaginary of 2nd:\n");
    scanf("%f %f", &num2.r, &num2.i);

    sum = add(num1, num2);

    printf("Sum: %.2f + %.2f\n", sum.r, sum.i);

    return 0;
}
