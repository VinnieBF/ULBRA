#include <stdio.h>

int main()

    {
        float sal,salReceber,grat,imp;
        printf("Digite seu salario bruto\n");
        scanf("%f%*c",&sal);
        grat=sal*0.05;
        imp=sal*0.07;
        salReceber=sal+grat-imp;
        printf("Seu salario liquido sera R$%.2f",salReceber);

        return 0;
    }