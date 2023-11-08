#include <stdio.h>

void summation(double* a, double* b, double *result);
void subtraction(double* a, double* b, double* result);
void multification(double* a, double* b, double* result);
void division(double* a, double* b, double* result);



int main(void) {
	double a = 2, b = 3;
	double result;
	summation(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	subtraction(&a, &b, &result);
	printf("%.0lf - %.0lf = %.2lf \n", a, b, result);

	multification(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

	division(&a, &b, &result);
	printf("%.0lf + %.0lf = %.2lf \n", a, b, result);
	return 0;
}

void summation(double* a, double* b, double *result) {
	*result = *a + *b;
}

void subtraction(double* a, double* b, double* result) {
	*result = *a - *b;
}

void multification(double* a, double* b, double* result) {
	*result = *a * *b;
}

void division(double* a, double* b, double* result) {
	*result = *a / *b;
}