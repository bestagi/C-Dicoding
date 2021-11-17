/* File : 3.1-assigni.c */
/* Penulis : Bestagi, Email bestagi.egi@live.com */
/* Mengisi variabel i yg ber-type in dengan nilai 5 dan menuliskannya */

#include<stdio.h>
 
int main (){
    /* Kamus */
    int i;
 
    /* Algoritma */
    i = 5; /* sekarang variabel i akan bernilai 5 */
    printf ("Ini nilai i : %d \n", i);
 
    i = i*10-2; /* Operasi matematis, hasilnya disimpan kembali di i */
    printf ("Ini nilai i : %d \n", i);
 
  return 0;
}