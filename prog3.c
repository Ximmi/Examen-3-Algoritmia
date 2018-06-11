#include <stdio.h>
/*1.- Definir una funci�n que reciba como argumento un arreglo de enteros por referencia, y dentro de la funci�n 
la funci�n deber� llenar el arreglo con enteros introducidos por el usuario mediante la funci�n scanf. La funci�n deber�
devolver el num. de elementos introducidos. La lectura del 0 indica que el usuario ha terminado de introducir los datos*/

/*2.-Definir una funci�n que reciba como argumento por referencia un arreglo de enteros y un entero n, donde n es el
n�mero de enteros contenidos en el arreglo. La funci�n deber� de imprimir tales n enteros (son tres funciones)*/

/*3.- Definir una funci�n que reciba por referencia dos arreglos de enteros y un entero n, donde este �ltimo es el 
n�mero de elementos contenidos en el primer arreglo, la funci�n debera copiar los elementos del primer arreglo al segundo arreglo*/

int llenar(int s[80]);
void copiar(int s[80], int m[80],int n);
void imprimir(int m[80], int n);
int main(){
	int s[80], m[80], n;
	//primer programa
	printf("Teclea los numeros del primer arreglo\n");
	n=llenar(s);
	printf("Total de elementos del primer arreglo:%d\n", n);
	//segundo programa
	printf("Numeros del primer arreglo:\n");
	imprimir(s,n);
	//tercer programa
	copiar(s, m, n);
	printf("Elementos copiados al segundo arreglo:\n");
	imprimir(m, n);

return 0;
}

int llenar(int s[80]){
	int  i;
	for(i=0; i<80;i++){
	scanf("%d", &s[i]);
	if(s[i]==0)
	return i;
	}
}

void copiar(int s[80], int m[80],int n){
	int i;
	for(i=0; i<n; i++){
		m[i]=s[i];
	}
}

void imprimir(int m[80], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\n", m[i]);
	}
}


