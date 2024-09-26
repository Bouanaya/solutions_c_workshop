#include <stdio.h>
/*
exercice 3:

Écrivez un programme C pour déterminer les jours de congé restant en fonction de :
- Nombre total de jours de congés accordés
- Nombre de jours de congés utilisés
- Statut de l'employé (0 pour temps partiel, 1 pour temps plein)

Les règles de gestion sont :
- Temps plein : Jours restants = Jours accordés - Jours utilisés
- Temps partiel : Jours restants = (Jours accordés / 2) - Jours utilisés
- Si les jours utilisés dépassent
Solutions ↙↙↙↙↙↙↙↙↙↙↙↙↙↙ :
*/




int main() {
    int JA, JU, statut , JR;;

    printf("Entrez le nombre total de jours de conges accordes : ");
    scanf("%d", &JA);

    printf("Entrez le nombre de jours de conges utilises : ");
    scanf("%d", &JU);

    printf("Entrez le statut de l'employe (0 pour temps partiel, 1 pour temps plein) : ");
    scanf("%d", &statut);

  

    if (statut == 1) {  
        JR = JA - JU;
    } else if (statut == 0) {  
        JR = (JA / 2) - JU;
    } else {
        printf("Statut invalide.\n");
        
    }

    if (JU > JA) {
        printf("Alerte : Les jours utilises depassent les jours accordes.\n");
    } else {
        printf("Jours de conge restants : %d\n", JR);
    }

    return 0;
}
