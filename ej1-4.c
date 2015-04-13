/* Tp #1 segunda clase de SSL
* Matias Nicolas Fradusco 
* 12/04/2015
*/


#include <stdio.h>

main()
 { 
 float fahr, celsius;
 int minimo, maximo, salto;

 minimo = 0;
 maximo = 300;
 salto = 15;

 celsius = minimo;

 while ( celsius <= maximo )
 { 
 fahr = (9.0/5.0)*celsius + 32;
 printf("%3.0f%6.1f\n", celsius, fahr );
 celsius = celsius + salto;
 } 

 } 

