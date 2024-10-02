 #include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

typedef struct {
    char nom[50];
    char telephone[15];
    char email[50];
} Contact;

Contact carnet[MAX_CONTACTS];
int nombreContacts = 0;

void ajouterContact() {
    if (nombreContacts < MAX_CONTACTS) {
        printf("Entrez le nom: ");
        scanf("%s", carnet[nombreContacts].nom);
        printf("Entrez le numero de telephone: ");
        scanf("%s", carnet[nombreContacts].telephone);
        printf("Entrez l'adresse e-mail: ");
        scanf("%s", carnet[nombreContacts].email);
        nombreContacts++;
        printf("Contact ajoute avec succès!\n");
    } else {
        printf("Carnet de contacts plein!\n");
    }
}

void afficherContacts() {
    for (int i = 0; i < nombreContacts; i++) {
        printf("Nom: %s, Telephone: %s, E-mail: %s\n", carnet[i].nom, carnet[i].telephone, carnet[i].email);
    }
}

void rechercherContact() {
    char nom[50];
    printf("Entrez le nom du contact à rechercher: ");
    scanf("%s", nom);
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(carnet[i].nom, nom) == 0) {
            printf("Nom: %s, Telephone: %s, E-mail: %s\n", carnet[i].nom, carnet[i].telephone, carnet[i].email);
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void modifierContact() {
    char nom[50];
    printf("Entrez le nom du contact à modifier: ");
    scanf("%s", nom);
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(carnet[i].nom, nom) == 0) {
            printf("Entrez le nouveau numero de telephone: ");
            scanf("%s", carnet[i].telephone);
            printf("Entrez la nouvelle adresse e-mail: ");
            scanf("%s", carnet[i].email);
            printf("Contact modifie avec succès!\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}

void supprimerContact() {
    char nom[50];
    printf("Entrez le nom du contact à supprimer: ");
    scanf("%s", nom);
    for (int i = 0; i < nombreContacts; i++) {
        if (strcmp(carnet[i].nom, nom) == 0) {
            for (int j = i; j < nombreContacts - 1; j++) {
                carnet[j] = carnet[j + 1];
            }
            nombreContacts--;
            printf("Contact supprime avec succès!\n");
            return;
        }
    }
    printf("Contact non trouve.\n");
}

int main() {
    int choix;
    do {
        printf("\nMenu:\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher tous les contacts\n");
        printf("3. Rechercher un contact\n");
        printf("4. Modifier un contact\n");
        printf("5. Supprimer un contact\n");
        printf("6. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);
        switch (choix) {
            case 1:
                ajouterContact();
                break;
            case 2:
                afficherContacts();
                break;
            case 3:
                rechercherContact();
                break;
            case 4:
                modifierContact();
                break;
            case 5:
                supprimerContact();
                break;
            case 6:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide!\n");
        }
    } while (choix != 6);
    return 0;
}
