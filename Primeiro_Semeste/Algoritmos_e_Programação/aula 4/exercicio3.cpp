#include <stdio.h>

int main()

    {
       float n1,n2,n3,p1,p2,p3,media;
       printf("Calcule sua media ponderada!\n");
       printf("Digite o peso da primeira prova\n");
       scanf("%f%*c",&p1);
       printf("Digite a nota 1:\n");
       scanf("%f%*c",&n1);
       printf("Digite o peso da segunda prova\n");
       scanf("%f%*c",&p2);
       printf("Digite a nota 2:\n");
       scanf("%f%*c",&n2);
       printf("Digite o peso da terceira prova:\n");
       scanf("%f%*c",&p3);
       printf("Digite a nota 3:\n");
       scanf("%f%*c",&n3);
       media=(n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
       printf("Sua media e: %.2f",media);

       return 0;
    }