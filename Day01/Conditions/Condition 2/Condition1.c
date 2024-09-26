#include <stdio.h>

int main() {
    double revenu;
    int scorecredit, dureepret;
    printf("Entrez le revenu annuel (en euros) : ");
    scanf("%lf", &revenu);
    printf("Entrez le score de credit (sur 1000) : ");
    scanf("%d", &scorecredit);
    printf("Entrez la duree du prêt (en annees) : ");
    scanf("%d", &dureepret);
if (revenu >= 30000 && scorecredit >= 700 && dureepret <= 10) {
        printf("eligible\n");
    } else if (revenu >= 30000 && scorecredit >= 650 && dureepret <= 15) {
        printf("eligible avec conditions\n");
    } else {
        printf("Non eligible\n");
    }
    

    return 0;
}
