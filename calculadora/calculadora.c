#include <stdio.h>
#include <windows.h>

float funcSoma(float a, float b) {
    return a + b;
}

float funcSub(float a, float b) {
    return a - b;
}

float funcMult(float a, float b) {
    return a * b;
}

float funcDiv(float a, float b) {
    return a / b;
}

int main() {

    char operador, dnv;
    float num1, num2;

    do
    {

        operador = ' ';
        dnv = ' ';
        num1 = 0;
        num2 = 0;

        printf("\n\nCarregando...");
        Sleep(3000);
        system("cls");

        printf("Voce deseja qual operacao [+][-][x][/] => ");
        scanf(" %c", &operador);
        
        if (operador == '+' || operador == '-' || operador == 'x' || operador == '/') {

            switch (operador)
            {
            case '+':
                
                printf("Digite o primeiro numero para somar e aperte enter: ");
                scanf(" %f", &num1);
                printf("Agora digite o segundo numero: ");
                scanf(" %f", &num2);
                printf("\nA soma de %.2f + %.2f => %.2f", num1, num2, funcSoma(num1, num2));
                break;
            
            case '-':

                printf("Digite o primeiro numero para subtrair: ");
                scanf(" %f", &num1);
                printf("Agora digite o segundo numero: ");
                scanf(" %f", &num2);
                printf("\nA subtracao de %.2f - %.2f => %.2f", num1, num2, funcSub(num1, num2));
                break;

            case 'x':
                
                printf("Digite o primeiro numero para multiplicar: ");
                scanf(" %f", &num1);
                printf("Agora digite o segundo numero: ");
                scanf(" %f", &num2);
                printf("\nA multiplicacao de %.2f x %.2f => %.2f", num1, num2, funcMult(num1, num2));
                break;

                case '/':

                printf("Digite o primeiro numero para dividir: ");
                scanf(" %f", &num1);
                printf("Agora digite o segundo numero: ");
                scanf(" %f", &num2);
                printf("\nA divisao de %.2f / %.2f => %.2f", num1, num2, funcDiv(num1, num2));
                break;
            default:
                printf("\nVoce digitou um operador invalido");
                break;
            }
        }else {
            printf("\nOperador invalido");
        }
        
        printf("\nVoce deseja fazer outra conta [S|N] ");
        scanf(" %c", &dnv);
    } while (dnv == 's' || dnv == 'S');
    
    if (dnv == 'n' || dnv == 'N'){
        printf("\nEncerrando...");
        Sleep(2000);
    }else {
        printf("\nCaracter invalido");
    }
    
    return 0;
}