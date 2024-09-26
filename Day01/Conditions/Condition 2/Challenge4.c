#include <stdio.h>
/*
exercice 4:
Écrivez un programme C pour évaluer la performance d'un employé en fonction de :
- Score de performance (de 0 à 100)
- Ancienneté (en années)
- Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus)

Les évaluations sont :
- Score >= 90 et Ancienneté >= 5 ans : Excellente
- Score >= 75 et Ancienneté >= 3 ans : Bonne
- Score >= 50 et Ancienneté < 3 ans : Satisfaisante
- Score < 50 : Insuffisante
- Ajoutez un bonus si des récompenses ont été reçues : 10% pour une récompense, 20% pour deux ou plus.
  Solutions ↙↙↙↙↙↙↙↙↙↙↙↙↙↙ :

*/

 

int main() {
    int score, anciennete, recompenses;
    float bonus = 0;

    printf("Entrez le score de performance (0-100): ");
    scanf("%d", &score);
    printf("Entrez l'anciennete (en annees): ");
    scanf("%d", &anciennete);
    printf("Entrez le nombre de recompenses (0, 1, 2 ou plus): ");
    scanf("%d", &recompenses);
     
  
    if (recompenses == 1) {
        bonus = 0.10;
    } else if (recompenses >= 2) {
        bonus = 0.20;
    }

    float scoreavecBonus = score + (score * bonus);

    if (scoreavecBonus >= 90 && anciennete >= 5) {
        printf("Performance: Excellente\n");
    } else if (scoreavecBonus >= 75 && anciennete >= 3) {
        printf("Performance: Bonne\n");
    } else if (scoreavecBonus >= 50 && anciennete < 3) {
        printf("Performance: Satisfaisante\n");
    } else {
        printf("Performance: Insuffisante\n");
    }

    return 0;
}
