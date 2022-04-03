#include <stdio.h>
#include <math.h>

int main()
    {
        int n1, quadrado, cubo, raizq, raizc;
        printf("Digite um Numero maior que zero:");
        scanf("%d%*c", &n1);
        quadrado= pow(n1, 2);
        cubo= pow(n1, 3);
        raizq= sqrt(n1);
        raizc= cbrt(n1);
        if (n1 > 0)
             {
                printf("O quadrado deste numero e: %d \n", quadrado);
                printf("O cubo deste numero e: %d \n" ,cubo);
                printf("A raiz quadrada deste numero e: %d \n",raizq);
                printf("A raiz cubica deste numero é: %d \n", raizc);

            }
            else {
                printf("Voce digitou um valor invalido!");;
            };


        return 0;

    }