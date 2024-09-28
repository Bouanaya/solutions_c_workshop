 #include <stdio.h>

 
void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

 
void decimalToHexadecimal(int n) {
    printf("%X", n);
}

int main() {
    int nombre;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    printf("Valeur binaire équivalente : ");
    decimalToBinary(nombre);
    printf("\n");

    printf("Valeur hexadécimale équivalente : ");
    decimalToHexadecimal(nombre);
    printf("\n");

    return 0;
}
