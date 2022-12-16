#include <stdio.h>

#define PI 3.14

float areaDoCirculo(float raio);

int main() {
	float r, a;
	printf("Informe o valor do raio: ");
	scanf("%f", &r);
	a = areaDoCirculo(r);
	printf("A area do circulo é %.2f cm.\n", a);
	return 0;
}

float areaDoCirculo(float raio) {
	return PI * raio * raio;
}
