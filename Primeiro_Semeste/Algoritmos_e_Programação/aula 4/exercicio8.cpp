#include <stdio.h>

int main()

    {
        float dep,taxa,rend,total;
        printf("Digite o valor do deposito:\n");
        scanf("%f%*c",&dep);
        printf("Digite o percentual de juros:");
        scanf("%f%*c",&taxa);
        rend=dep*(taxa/100);
        total=dep+rend;
        printf("Seu rendimento foi de R$%.2f\n",rend);
        printf("O valor total do investimento esta em R$%.2f",total);

        return 0;
    }