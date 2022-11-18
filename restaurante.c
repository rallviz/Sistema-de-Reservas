#include  <stdio.h>
#include  <stdlib.h>
#include "R&R.h"

struct restaurante{
    char local[100];
    char horaOpem[15];
    char horaClose[15];
    int total_mesa;
    int total_reserva;
};

void local(Restaurante *r) {
    printf("\nINSIRA A LOCALIZACAO: ");
	scanf("%s" ,&r->local);
    return;
}

