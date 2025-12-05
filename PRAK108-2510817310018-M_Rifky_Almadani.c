#include <stdio.h>

int main(){
    float putaran = 5;
    float jarak_tempuh = 14;
    float keliling = jarak_tempuh / putaran;
    float jari_jari = (keliling) / (2 * 3.14);

    printf("Diketahui: \n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran \n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer \n \n", jarak_tempuh);
    printf("Jawaban: \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %0.2f Kilometer \n", jari_jari );
    return 0;
}