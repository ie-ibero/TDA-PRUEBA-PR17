/*
Codigo de prueba para github
Este programa utiliza funciones para realizar la manipulacion de cadenas

void mayusculas(char cad1[], char cad2[]) copia la cad1 a cad2, convirtiendo a mayusculas
void sinvocales(char cad1[], char cad2[]) copia la cad1 a cad2, quitando las vocales
void inverso(char cad1[], char cad2[]) copia la cad1 a cad2 pero en orden invertido

caracteres alternos
longitud cadena

*/
#include <stdio.h>
#include <string.h>

extern void mayusculas(char cad1[], char cad2[]); 
//extern void sinvocales(char cad1[], char cad2[]); 
//extern void inverso(char cad1[], char cad2[]); 

int main(int argc, char **argv)
{

int opc; 
char cad1[50],cad2[50];

//validar argumentos de entrada, opcion 1,2,3 y cadena a manipular
// 1 - mayusculas
// 2 - quitar vocales
// 3 - invertir cadena

sscanf(argv[1],"%d",&opc);
strcpy (cad1,argv[2]);

if (opc == 1)
{
	//mayusculas(cad1,cad2);
	strcpy(cad2,cad1);
	printf("%s %s \n",cad1,cad2);
}
else
{
	printf("Las demas opciones no estan implementadas");
}
return 0;

}
