#include <stdio.h>

int main()

    {
        float base,altura,area;
        printf("Digite a medida da base do triangulo em metros\n");
        scanf("%f%*c",&base);
        printf("Digite a medida da altura do triangulo em metros\n");
        area=(base*altura)/2;
        printf("A area do seu triangulo sera %.2fm",area);

        return 0;
    }