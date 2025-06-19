#include <stdio.h>
#include <windows.h>

int main() {

	char caracteres[3][10] = { "[", "=", "]" };

	int tempo;
	printf("Por quantos segundos voce deseja esperar: ");
	scanf(" %d", &tempo);

	for (int i = 0; i <= tempo; i++ ) {
		if (i == 0) {
			printf("%s", caracteres[0]);
		} else if (i < tempo) {
			printf("%s", caracteres[1]);
		} else {
			printf("%s", caracteres[2]);
		}
		Sleep(tempo * 100);
		//system("cls");
	}


	return 0;
}