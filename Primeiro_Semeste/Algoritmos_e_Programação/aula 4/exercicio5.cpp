#include <stdio.h>

int main()

    {
        float salarioAntigo,perc,aumento,salarioNovo;
        printf("Digite seu salario atual\n");
        scanf("%f%*c",&salarioAntigo);
        printf("Digite o percentual de aumento do seu salario:");
        scanf("%f%*c",&perc);
        aumento=(perc/100)*salarioAntigo;
        printf("O valor do aumento sera R$%.2f\n",aumento);
        salarioNovo=aumento+salarioAntigo;
        printf("A partir de agora seu salario sera R$%.2f",salarioNovo);

        return 0;
    }