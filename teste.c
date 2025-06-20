#include <stdio.h>
#include <windows.h>

int main() {

	char caracteres[3][10] = { "[", "=", "]" };
	int tempo;
	float varHora, varMinuto, varSegundo;
	
	printf("Digite um numero em segundos: ");
	scanf(" %d", &tempo);
	
	if (tempo >= 60) {
		varMinuto = tempo / 60;
		varSegundo = tempo % 60;
	}
	
	Sleep(500);
	system("cls");

	printf("\n|----------|");
	printf("\n| HH:MM:SS |");
	printf("\n|----------|");
	
	printf("\n%.0f:%.0f:%.0f\n", varHora, varMinuto, varSegundo);

	for (int i = 0; i <= tempo; i++ ) {
		if (i == 0) {
			printf("%s", caracteres[0]);
		} else if (i < tempo) {
			printf("%s", caracteres[1]);
		} else {
			printf("%s", caracteres[2]);
		}
		Sleep(1000);
	}


	return 0;
}