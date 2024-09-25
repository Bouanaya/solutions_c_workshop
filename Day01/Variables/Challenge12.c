#include <stdio.h>

int main() {
    int num, reversedNum;
    int thousands, hundreds, tens, units;

 
    printf("Entrez un nombre entier a quatre chiffres : ");
    scanf("%d", &num);

  
    thousands = num / 1000;
    hundreds = (num / 100) % 10;
    tens = (num / 10) % 10;
    units = num % 10;

   
    reversedNum = units * 1000 + tens * 100 + hundreds * 10 + thousands;

  
    printf("Le nombre inverse est : %d\n", reversedNum);

    return 0;
}
