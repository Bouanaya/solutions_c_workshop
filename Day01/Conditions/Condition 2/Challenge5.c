#include <stdio.h>

/*Écrivez un programme C pour planifier un voyage en fonction de :
- Budget (en euros)
- Destination (1 pour plage, 2 pour montagne, 3 pour ville)
- Nombre de personnes

Les recommandations sont :
- Budget >= 1000 € : Voyage haut de gamme
- Budget entre 500 € et 1000 € : Voyage moyen
- Budget < 500 € : Voyage économique

Les destinations recommandées sont :
- Plage pour un budget >= 1000 € et > 2 personnes
- Montagne pour un budget >= 500 € et <= 2 personnes
- Ville pour tout budget et nombre de personnes*/










void planifierVoyage(int budget, int destination, int nbPersonnes) {
    // Déterminer le type de voyage
   
}

int main() {
    int budget, destination, nbPersonnes;

    // Saisie des informations
    printf("Entrez votre budget (en euros): ");
    scanf("%d", &budget);
    printf("Choisissez votre destination (1 pour plage, 2 pour montagne, 3 pour ville): ");
    scanf("%d", &destination);
    printf("Entrez le nombre de personnes: ");
    scanf("%d", &nbPersonnes);

     char* typeVoyage;
    if (budget >= 1000) {
        typeVoyage = "Voyage haut de gamme";
    } else if (budget >= 500) {
        typeVoyage = "Voyage moyen";
    } else {
        typeVoyage = "Voyage économique";
    }

    // Déterminer la destination recommandée
    char* destinationRecommandee;
    if (destination == 1 && budget >= 1000 && nbPersonnes > 2) {
        destinationRecommandee = "Plage";
    } else if (destination == 2 && budget >= 500 && nbPersonnes <= 2) {
        destinationRecommandee = "Montagne";
    } else {
        destinationRecommandee = "Ville";
    }

    // Afficher les recommandations
    printf("Type de voyage: %s\n", typeVoyage);
    printf("Destination recommandée: %s\n", destinationRecommandee);

   

    return 0;
}
