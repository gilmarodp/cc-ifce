#include <stdio.h>

int main() {
    // Define os pesos dos ingredientes em gramas
    float pesoQueijo = 50.0, pesoPresunto = 50.0, pesoRodelaHamburger = 100.0;
    
    // Inicializa os totais de peso dos ingredientes em quilogramas
    float totalPesoQueijo = 0.0, totalPesoPresunto = 0.0, totalPesoRodelaHamburger = 0.0;
    
    int quantidadeSanduiches = 0;
    
    // Solicita ao usuário a quantidade de sanduíches a serem feitos
    printf("Quantos sanduíches você vai fazer? : ");
    scanf("%d", &quantidadeSanduiches);
    
    // Calcula o total de peso de cada ingrediente em quilogramas
    totalPesoQueijo = ((pesoQueijo * 2) * quantidadeSanduiches) / 1000;
    totalPesoPresunto = ((pesoPresunto * 1) * quantidadeSanduiches) / 1000;
    totalPesoRodelaHamburger = ((pesoRodelaHamburger * 1) * quantidadeSanduiches) / 1000;
    
    // Exibe a quantidade necessária de cada ingrediente em quilogramas
    printf("Quantidade (kg) necessária dos ingredientes:\n");
    printf("Queijo: %.2f kg\n", totalPesoQueijo);
    printf("Presunto: %.2f kg\n", totalPesoPresunto);
    printf("Rodela de Sanduíche: %.2f kg\n", totalPesoRodelaHamburger);
    
    return 0;
}
