#include <stdio.h>

int main()

    {
        float area, raio;
        printf("Calcule a area de um circulo.\n");
        printf("Digite a medida (em metros) do raio do circulo:\n");
        scanf("%f%*c",&raio);
        area=3.1415*(raio*raio);
        printf("A area do circulo e: %.2fm3",area);

        return 0;
    }