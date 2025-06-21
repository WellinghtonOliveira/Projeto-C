#include <stdio.h>
#include <windows.h>

int main()
{

    FILE *persistenciaEndereco;
    int escolhas;
    char nome[30], email[30], estado[10], lendoArquivo[1000], booleanoRepeat;

    do
    {
        system("cls");
        printf("\n1 - Voce deseja se cadastrar.\n2 - Voce deseja ler os dados.\n\nSua escolha => ");
        scanf(" %d", &escolhas);
        system("cls");

        if (escolhas == 1)
        {
            persistenciaEndereco = fopen("address.txt", "a");
            printf("Adicione aqui seu primeiro nome: ");
            scanf(" %s", &nome);
            fprintf(persistenciaEndereco, "\nNome: %s\n", nome);

            printf("\n\nAdicione o email: ");
            scanf(" %s", &email);
            fprintf(persistenciaEndereco, "Email: %s\n", email);

            printf("\n\nInforme seu estado: ");
            scanf(" %s", &estado);
            fprintf(persistenciaEndereco, "Estado: %s\n", estado);

            fclose(persistenciaEndereco);

            system("cls");
            printf("Dados salvos com sucesso.\n\n");
        }
        else
        {
            persistenciaEndereco = fopen("address.txt", "r");

            if (persistenciaEndereco == NULL)
            {
                printf("\nNenhum dado encontrado.\n");
                return 1;
            }
            else if (fgets(lendoArquivo, sizeof(lendoArquivo), persistenciaEndereco) == NULL)
            {
                printf("\nNenhum dado encontrado no arquivo.\n");
                return 1;
            }
            else
            {

                while (fgets(lendoArquivo, sizeof(lendoArquivo), persistenciaEndereco))
                {
                    printf("%s", lendoArquivo);
                }

                fclose(persistenciaEndereco);
            }
        }

        printf("\nVoce deseja repetir [S|N]: ");
        scanf(" %c", &booleanoRepeat);
    } while (booleanoRepeat == 's' || booleanoRepeat == 'S');

    if (booleanoRepeat != 'n' || booleanoRepeat != 'N') {
        system("cls");
        printf("\nCaracter invalido.\nSaindo...\n\n");
        return 1;
    }

    printf("\nEncerrando...\n");

    return 0;
}