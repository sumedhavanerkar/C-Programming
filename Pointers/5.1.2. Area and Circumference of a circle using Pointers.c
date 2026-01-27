#include<stdio.h>

void area_peri(float, float*, float*);
  
int main() {
	float r;
	float a, c;
	scanf("%f", &r);
    area_peri(r, &a, &c);
    printf("%.2f\n", a);
    printf("%.2f\n", c);
    return 0;
}

void area_peri(float radius, float *area, float *circumference) {
	const float pi = 3.14;
	*area = pi * radius * radius;
	*circumference = 2 * pi * radius;
}