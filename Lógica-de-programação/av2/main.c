#include <stdio.h>

int verificarParImpar(int numero)
{
    if (numero % 2 == 0)
        return 1; // número par
    else
        return 0; // número ímpar
}

int main()
{
    int numeroInicial, numeroFinal;
    int quantidadePares = 0;

    printf("Digite o numero inicial: ");
    scanf("%d", &numeroInicial);

    printf("Digite o numero final: ");
    scanf("%d", &numeroFinal);

    printf("\n");

    for (int i = numeroInicial; i <= numeroFinal; i++)
    {
        int resultado = verificarParImpar(i);

        printf("Numero: %d ", i);
        if (resultado == 1)
        {
            printf("(par)\n");
            quantidadePares++;
        }
        else
        {
            printf("(impar)\n");
        }
    }

    printf("\nQuantidade de numeros pares encontrados: %d\n", quantidadePares);

    return 0;
}
