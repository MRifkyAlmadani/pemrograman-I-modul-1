#include <stdio.h>
#include <math.h>

int main(){
    float alas = 5;
    float tinggi = 12;
    double sisi_miring = pow(((alas * alas) + (tinggi * tinggi)), 0.5);

    printf("Diketahui:\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("\nJawab:\n");
    printf("Sisi A = %.0f cm \n", tinggi);
    printf("Sisi B = %.0f cm \n", sisi_miring);
    printf("Sisi C = %.0f cm \n", alas);
    printf("Keliling = %.0f cm \n", alas + tinggi + sisi_miring);
    printf("Luas = %.0f cm \n", (0.5 * alas * tinggi));
    return 0; 
}