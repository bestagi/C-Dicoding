#include<stdio.h>
int main (){
  int uang= 6000;
  int hujan= 0; /*artinya hujan bernilai FALSE */
  int sendal= 0; /*sendal bernilai false*/

   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan) && (sendal==1));
 
   uang= 6000;
   hujan= 0; /*artinya hujan bernilai false */
   sendal= 1; /*sendal bernilai true*/
   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan) && (sendal==1));
 
  return 0;
}