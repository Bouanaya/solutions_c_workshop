#include <stdio.h>

int main() {
    char nom[50];
    char prenom[50];
    int age;
    char sexe[10];
    char email[50];
// forme nom et prenom
    printf("Entrez votre nom: ");
    scanf("%s", nom);

    printf("Entrez votre prenom: ");
    scanf("%s", prenom);
// forme age
    printf("Entrez votre age: ");
    scanf("%d", &age);
// forme sex
    printf("Entrez votre sexe: ");
    scanf("%s", sexe);
// forme Email
    printf("Entrez votre adresse email: ");
    scanf("%s", email);

    printf("\nVos informations personnelles:\n");
    printf("Nom: %s\n", nom);
    printf("Prenom: %s\n", prenom);
    printf("Age: %d\n", age);
    printf("Sexe: %s\n", sexe);
    printf("Email: %s\n", email);

    return 0;
}


     
 


