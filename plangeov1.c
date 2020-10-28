//plangeov1
//Programa para calculo de perimetro e area de figuras planas

#include <stdio.h>
#include <math.h>

int main (void) {
	
	/*
	int quadrado;
	int retangulo;
	int triangulo;
	int circulo;
	*/
	int opcao;
	
	printf( " \nDigite o numero para a figura:\n 1: quadrado\n 2: retangulo\n 3: triangulo\n 4: circulo\n\n " );	
	scanf("%d", &opcao);

// Verificação de erro
	if(opcao > 4){
		printf("opcao invalida\n");
	}
	if(opcao < 1){
		printf("opcao invalida\n");
	}

// Calculo de quadrado
	if(opcao == 1){
		int qlado;
		printf("\nDigite a medida do lado:");
		scanf("%d", &qlado);
		printf("\nA area mede: %d", qlado*qlado);
		printf("\nO perimetro mede: %d\n", qlado*4);
	}
	
// Calculo de retangulo
	if(opcao == 2){
		int ralt;	
		int rlarg;
		printf("\nDigite a altura:\n");
		scanf("%d", &ralt);
		printf("\nDigite a largura:\n");
		scanf("%d", &rlarg);
		printf("\nA area mede: %d", ralt*rlarg);
		printf("\nO perimetro mede: %d\n", (ralt*2)+(rlarg*2));
	}
		
// Calculo de triangulo
	
	if(opcao == 3){
		int ladotra;
		int ladotrb;
		int ladotrc;
		
		printf("\nDigite a medida do lado A:");
		scanf("%d", &ladotra);
		printf("\nDigite a medida do lado B:");
		scanf("%d", &ladotrb);
		printf("\nDigite a medida do lado C:");
		scanf("%d", &ladotrc);

		int peritri = ladotra+ladotrb+ladotrc;
		float heronform = peritri/2;
		float areatri = sqrt(heronform*(heronform-ladotra)*(ladotrb)*(ladotrc));

		printf("\nA area mede: %f", areatri);
		printf("\nO perimetro mede: %d\n", peritri);
	}
		
// Calculo de circulo
	if(opcao == 4){
		float pi;
		pi = 3.141592;
		int raio;
		int diametro;
		printf("\nDigite a medida do raio:");
		scanf("%d", &raio);
		diametro = 2*raio;
		float areacirc = pi*raio*raio;
		float pericirc = pi*diametro;
		printf("\nA area mede: %f", areacirc);
		printf("\nO perimetro mede: %f\n", pericirc);
	}
	
	return 0;
}
