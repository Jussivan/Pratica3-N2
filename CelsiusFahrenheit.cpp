#include <stdio.h>

float CpF(float CpF);
float FpC(float FpC);
float CpK(float CpK);

int main() {
	int opcao;
	float temperatura, resultado;
	printf("Qual conversão você quer fazer ?\n\n1 - Celsius para Fahrenheit.\n2 - Fahrenheit para Celsius.\n3 - Celsius para Kelvin.\n\n");
	scanf("%d", &opcao);
	printf("Informe a temperatura: ");
	scanf("%f", &temperatura);
	if(opcao==1) {
		CpF(temperatura);
		resultado = CpF(temperatura);
	}
	if(opcao==2) {
		FpC(temperatura);
		resultado = FpC(temperatura);
	}
	
	if(opcao==3) {
		CpK(temperatura);
		resultado = CpK(temperatura);
	}
	printf("Resultado = %.2f.", resultado);
	return 0;
}

float CpF(float CpF) {
	return (CpF * 1.8) + 32;
}
float FpC(float FpC) {
	return (FpC - 32)/1.8;
}
float CpK(float CpK) {
	return CpK + 273.15;
}
