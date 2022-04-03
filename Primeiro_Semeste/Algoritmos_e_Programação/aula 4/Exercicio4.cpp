#include <stdio.h>

int main()

    {
        float salarioAntigo, salarioNovo;
        printf("Voce teve um aumento de 25%!\n Digite seu salario atual\n");
        scanf("%f%*c",&salarioAntigo);
        salarioNovo=(0.25*salarioAntigo)+salarioAntigo;
        printf("A partir de agora seu salario sera R$%.2f",salarioNovo);

        return 0;
    }