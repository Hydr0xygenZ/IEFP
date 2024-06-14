#include <stdio.h>
#include <math.h>


int main() {
    
    double valora, valorb, valorc;
    double calculo, raiz1, raiz2;



    do {
        printf("Escreva o valor de 'a', nao pode ser 0\n");
        scanf("%lf", &valora);
    if (valora == 0) {
        printf("O valor de 'a' deve ser diferente de zero. Escreva novamente\n");
        }
    } while (valora == 0);


    printf("Escreva o valor de 'b' ");
    scanf("%lf", &valorb);
    printf("Escreva o valor de 'c' ");
    scanf("%lf", &valorc);

    
    calculo = valorb * valorb - 4 * valora * valorc;

    
    if (calculo > 0) {
        
        raiz1 = (-valorb + sqrt(calculo)) / (2 * valora);
        raiz2 = (-valorb - sqrt(calculo)) / (2 * valora);
        printf("A equacao tem duas raizes reais distintas\n");
        printf("raiz1 = %.2lf\n", raiz1);
        printf("raiz2 = %.2lf\n", raiz2);
    
	} else if (calculo == 0) {
        
        raiz1 = -valorb / (2 * valora);
        printf("A equacao tem uma raiz real dupla\n");
        printf("x = %.2lf\n", raiz1);
    } else {
      
        printf("A equacao nao tem raizes reais\n");
    }

    return 0;
}