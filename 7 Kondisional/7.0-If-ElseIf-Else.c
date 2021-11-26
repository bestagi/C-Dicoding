#include<stdio.h>
int main (){

  int a;

  printf ("Program untuk menentukan positif negatif suatu bilangan \n");
  printf ("Ketikkan suatu nilai integer : ");
  scanf ("%d", &a);

  if (a == 0){
      printf ("Nilai a Nol \n");
    }
  else if (a > 0){
  printf ("Nilai a Positif : %d \n", a);
  }
  else {
    printf ("Nilai a Negatif : %d \n", a);
  }
  
  return 0;
}