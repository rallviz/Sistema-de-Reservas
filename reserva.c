#include  <stdio.h>
#include  <stdlib.h>
#include "restaurante.h"

struct reserva{
    char n_responsavel[100];
    char horaIn[15];
    char horaOut[15];
    int n_mesa;
    float Consumo;
};

struct fila{
	
	Lista *entra;
	Lista *sai;
};


void preencheReserva(Reserva *rv){
	printf("\nNOME DO RESPONSAVEL:");
		scanf("%s",);
	
	printf("\nHORARIO DE CHEGADA: ");
		scanf("%s",);
	
	printf("\nHORARIO DE SAIDA: ");
		scanf("%s",);
	
	printf("\nNUMERO DA MESA: ");
		scanf("%d",,);
	
	printf("\nCONSUMO: ");
		scanf("%f",);
}
