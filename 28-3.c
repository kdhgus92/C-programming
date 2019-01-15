#include <stdio.h>

typedef struct _complex
{
	double real;
	double imag;
} Complex;

Complex Add(Complex c1, Complex c2);
Complex Multi(Complex c1, Complex c2);
void ShowData(Complex c);

int main(void)
{
	Complex c1, c2;
	printf("복소수 입력(실수 허수): ");
	scanf("%lf %lf", &c1.real, &c1.imag);

	printf("복소수 입력2(실수 허수): ");
	scanf("%lf %lf", &c2.real, &c2.imag);

	printf("합 : ");
	ShowData(Add(c1, c2));

	printf("곱 : ");
	ShowData(Multi(c1, c2));

	return 0;
}

Complex Add(Complex c1, Complex c2)
{
	Complex c3;
	c3.real = c1.real + c2.real;
	c3.imag = c1.imag + c2.imag;
	return c3;
}

Complex Multi(Complex c1, Complex c2)
{
	Complex c3;
	c3.real = c1.real*c2.real - c1.imag*c2.imag;
	c3.imag = c1.imag*c2.real + c1.real*c2.imag;
	return c3;
}

void ShowData(Complex c1)
{
	printf("%lf+(%lf)i \n", c1.real, c1.imag);
}
