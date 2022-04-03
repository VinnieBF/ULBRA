#include <stdio.h>

int main()

    {
        float nota1,nota2,nota3,media;
        printf("Calcule sua media!\n");
        printf("Digite a primeira nota:\n");
        scanf("%f%*c",&nota1);
        printf("Digite a segunda nota\n");
        scanf("%f%*c",&nota2);
        printf("Digite a terceira nota\n");
        scanf("%f%*c",&nota3);
        media=(nota1+nota2+nota3)/3;
        printf("A sua media e: %.2f",media);

        return 0;

    }