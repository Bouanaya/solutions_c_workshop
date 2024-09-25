 #include <stdio.h>


int main() {
    int choice, years;

    printf("Entrez le nombre d'annes : ");
    scanf("%d", &years);

    printf("Choisissez une conversion :\n");
    printf("1. Mois\n");
    printf("2. Jours\n");
    printf("3. Heures\n");
    printf("4. Minutes\n");
    printf("5. Secondes\n");
    printf("Votre choix : ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("%d annes = %d mois\n", years, years * 12);
            break;
        case 2:
            printf("%d annes = %d jours\n", years, years * 365);
            break;
        case 3:
            printf("%d annes = %d heures\n", years, years * 365 * 24);
            break;
        case 4:
            printf("%d annes = %d minutes\n", years, years * 365 * 24 * 60);
            break;
        case 5:
            printf("%d annes = %d secondes\n", years, years * 365 * 24 * 60 * 60);
            break;
        default:
            printf("Choix invalide\n");
    }

    return 0;
}
