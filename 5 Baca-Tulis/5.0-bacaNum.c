/* File : 5.0-bacaNum.c */
/* Penulis : Bestagi, Email bestagi.egi@live.com */
/* Deskripsi :
              Contoh membaca nilai numerik : bilangan bulat, bilangan rill
              kemudian menuliskan nilai yang dibaca */

#include<stdio.h>
int main(){
    /* Kamus */
    int angka;
    float x;

    /* Program */
    printf("Contoh membaca dan menulis, ketik nilai integer : ");
    scanf("%d", &angka); /* membaca nilai a yang bertype integer perhatikan bahwa nama variabel ditulis dengan "&a" */
    printf("Nilai yang dibaca : %d \n", angka);

    printf("Ketik nilai sebuah bilangan riil : ");
    scanf("%f", &x); /* Membaca nilai a yang bertype integer */
    printf("Nilai yang dibaca : %f \n", x);

    /* coba ketik : scanf ("%d", a);dan tuliskan nilainya. Apa akibatnya ?*/
    /* coba ketik : scanf ("%f", x);dan tuliskan nilainya. Apa akibatnya ?*/

    return 0;
}