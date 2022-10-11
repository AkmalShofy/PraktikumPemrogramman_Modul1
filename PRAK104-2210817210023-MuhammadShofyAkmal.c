#include <stdio.h>
int main () {
int a=400000, b=350000, c, d ;
printf ("Harga sepatu A adalah 400000\n");
printf ("Harga sepatu B adalah 350000\n");
c=a*0.13;
d=b*0.21;
printf ("Sepatu A mendapat diskon 13 persen sehingga harganya menjadi %d\n", a-c);
printf ("Sepatu B mendapat diskon 21 persen sehingga harganya menjadi %d\n", b-d);  
}