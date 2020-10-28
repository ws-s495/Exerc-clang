#include <stdio.h>

int main (void) {
	int ret = 0;
	ret = printf ("ahooo!\n");
	printf ("retorno do printf anterior: %d\n", ret);
	//retorna o numero de caracteres da variavel ret
	printf ("%x - %d - %d - %d\n", 10, 0xa, 'A', 999);
	// %x: exibe 10 decimal em hexadecimal 
	// %d: exibe 0xa em decimal
	// %d: exibe o caracter ascii 'A' em decimal
	// %d: exibe zero pela variavel vazia
	return 0;
}
