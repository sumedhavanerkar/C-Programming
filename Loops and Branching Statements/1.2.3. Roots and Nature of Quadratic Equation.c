#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, d, r1, r2;
	printf ("Enter coefficients a, b and c: ");
	scanf("%f %f %f", &a, &b, &c);
	d = b*b - 4*a*c;
	if(d > 0) {
		r1 = (-b + sqrt(d)) / (2*a);
		r2 = (-b - sqrt(d)) / (2*a);
		printf("root1 = %.2f and root2 = %.2f", r1, r2);
	} else if(d == 0) {
		r1 = r2 = -b / (2*a);
		printf("root1 = root2 = %.2f", r1);
	} else {
		float real = -b/(2*a);
		float imag = sqrt(-d)/(2*a);
		printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi", real, imag, real, imag);
	}
	return 0;
}
