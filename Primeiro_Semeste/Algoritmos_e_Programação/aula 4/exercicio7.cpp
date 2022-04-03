#include <stdio.h>

int main()

    {
        float sal,salReceber,grat,imp;
        printf("Digite seu salario base\n");
        scanf("%f%*c",&sal);
        imp=sal*0.1;
        salReceber=sal+50-imp;
        printf("Seu salario sera R$%.2f",salReceber);

        return 0;
    }