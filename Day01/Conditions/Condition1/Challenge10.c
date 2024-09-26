#include <stdio.h>
#include <string.h>

int main() { 
    int jour, mois, annee;
    char moisNom[12][10] = {"Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin","Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"};
    printf("Entrez la date (jj/mm/aaaa) : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
    
    if(mois >= 1 && mois <= 12) {
        printf("%d-%s-%d\n", jour, moisNom[mois - 1], annee);
    } else {
        printf("Mois invalide!\n");
    }
    
    return 0;
}
