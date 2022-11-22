#include  <stdio.h>
#include  <stdlib.h>
#include "restaurante.h"

struct restaurante{
    char local[100];
    char horaOpen[15];
    char horaClose[15];
    int total_mesa;
    int total_reserva;
};

struct reserva{
    char n_responsavel[100];
    char horaIn[15];
    char horaOut[15];
    int n_mesa;
    float consumo;
};

struct fila{
	Reserva *entra;
	Reserva *sai;
};

Fila* fila_cria(void){
	Fila *rv = (Fila*)malloc(sizeof(Fila));
	rv -> entra = NULL;
	rv -> sai = NULL;
	return rv;
}

Restaurante* CriaR(){
	Restaurante *r = (Restaurante*)malloc(sizeof(Restaurante));
	return r;
}

Reserva* CriaRV(){
	Reserva *rv = (Reserva*)malloc(sizeof(Reserva));
	return rv;
}
//funcoes do menu restaurante















//funcoes do menu de reserva

void addReserva(Fila *rv){
	Reserva *novo = (Reserva*)malloc(sizeof(Reserva));
	
	printf("  ////////////////////////////////////\n");
	printf("  ///   = PREENCHA SUA RESERVA =   ///\n");
	printf("  ////////////////////////////////////\n");
	
	printf("\n  NOME DO RESPONSAVEL: ");
		scanf(" %[^\n]" ,novo->n_responsavel);
	
	printf("  HORARIO DE CHEGADA: ");
		scanf(" %[^\n]" ,novo->horaIn);
	
	printf("  HORARIO DE SAIDA: ");
		scanf(" %[^\n]" ,novo->horaOut);
	
	printf("  NUMERO DA MESA: ");
		scanf("%d" ,&novo->n_mesa);
	
	printf("  CONSUMO: ");
		scanf(" %f" ,&novo->consumo);
		
	novo -> prox = NULL;
    if(rv -> sai != NULL)
        rv -> sai -> prox = novo;
    else{
       	rv -> entra = novo;
    }
    rv -> sai = novo;
}
