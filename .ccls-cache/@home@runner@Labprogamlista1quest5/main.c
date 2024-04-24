#include <stdio.h>

int main() {
    float valor_conta;
    float taxa_garcom;
    float total_pago;

  
    printf("Digite o valor da conta do restaurante: ");
    scanf("%f", &valor_conta);


    taxa_garcom = valor_conta * 0.1;


    total_pago = valor_conta + taxa_garcom;

    printf("Total a ser pago (incluindo taxa do garçom): %.2f\n", total_pago);

    return 0;
}



