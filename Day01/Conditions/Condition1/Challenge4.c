#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double Delta, x1, x2;

 
    printf("Entrez a : ");
    scanf("%lf", &a);
    printf("Entrez b : ");
    scanf("%lf", &b);
    printf("Entrez c : ");
    scanf("%lf", &c);
    Delta = b * b - 4 * a * c;
 
    if (Delta > 0) {
        x1 = (-b + sqrt(Delta)) / (2 * a);
        x2 = (-b - sqrt(Delta)) / (2 * a);
        printf(" deux solutions :\n");
        printf("Solution 1 : %.2lf\n", x1);
        printf("Solution 2 : %.2lf\n", x2);
    } else if (Delta == 0) {
    
        x1 = -b / (2 * a);
        printf("L'équation a une solution réelle double :\n");
        printf("Solution : %.2lf\n", x1);
    } else {
       
        printf("n'a pas de solution.\n");
    }

    return 0;
}
