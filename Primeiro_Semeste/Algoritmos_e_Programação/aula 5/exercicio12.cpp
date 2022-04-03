#include <stdio.h>
#include <math.h>

int main()
    {
        int num1, num2, r1, r2;
        printf("Digite dois numeros que sejam maior que 0! \n");
        printf("Digite o primeiro numero: ");
        scanf("%d%*c", &num1);
        printf("Digite o segundo numero: ");
        scanf("%d%*c", &num2);

        r1=pow(num1,num2);
        r2=pow(num2,num1);

        if(num1>0 && num2>0)
            {
                printf("%d elevado na %d e igual a: %d", num1,num2,r1);
                printf("%d elevado na %d e igual a: %d", num2,num1,r2);
            }
        else{
            printf("Voce digitou valor invalido.");
        };

        return 0;
    }
