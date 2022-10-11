#include <stdio.h>
#include <math.h>
int main () {
int a=12, c=5, b;
printf ("Diketahui : \n");
printf ("Alas = %d cm\n", c);
printf ("Tinggi = %d cm\n", a);
b=sqrt(a*a+c*c);
printf ("Jawab : \n");
printf ("Sisi A = %d cm\n", a);
printf ("Sisi B = %d cm\n", b);
printf ("Sisi C = %d cm\n", c);
printf ("Keliling = %d cm\n",a+b+c); 
printf ("Luas = %d cm", (a*c)/2);
}