#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "R&R.h"


int main(){
	
	setlocale(LC_ALL,"portuguese");
    CadRestaurante();
    return 0;
}
	void CadRestaurante(){
 		int op; //atribui a opcao ("op") inserida pelo usuario.
 		int comp = 1;
     
     while(comp == 1){   
        printf("//////////////////////////////////////////////////\n");
        printf("///         ======= RESTAURANTE =======        ///\n");
        printf("//////////////////////////////////////////////////\n");
        printf("///                                            ///\n");
        printf("///          [1] - LOCALIZACAO;                ///\n");      
        printf("///          [2] - HORARIO DE ABERTURA;        ///\n");
        printf("///          [3] - HORARIO DE FECHAMENTO;      ///\n");
        printf("///          [4] - TOTAL DE MESAS;             ///\n");
        printf("///          [5] - TOTAL DE RESERVAS;          ///\n");
        printf("///          [6] - RESERVAS;                   ///\n");
        printf("///                                            ///\n");
        printf("//////////////////////////////////////////////////\n");

        printf("\nINSIRA A OPÇÃO: ");
        scanf("%d", &op);

        switch(op){
            
            case 1: system("clear||cls");
            local();
            system("pause");
            break;
        	
        	case 6: system("clear||cls");
   			menu();
            system("pause");
            break;
        	
            
        }

    }
}
	void menu(){
        
   	    int opm; //atribui a opcao do menu ("opm") inserida pelo usuario.
	
        printf("//////////////////////////////////////////////////\n");
        printf("///            ======= MENU =======            ///\n");
        printf("//////////////////////////////////////////////////\n");
        printf("///                                            ///\n");
        printf("///          [1] - ADICIONAR RESERVA;          ///\n");
        printf("///          [2] - EXCLUIR RESERVA;            ///\n");
        printf("///          [3] - LISTAR RESERVAS;            ///\n");
        printf("///          [4] - EDITAR RESERVA;             ///\n");
        printf("///          [5] - BUSCAR RESERVA;             ///\n");
        printf("///          [6] - CONSULTAR RESERVA;          ///\n");
        printf("///          [7] - SAIR;                       ///\n");
        printf("///                                            ///\n");
        printf("//////////////////////////////////////////////////\n");
        
        printf("\nINSIRA A OPÇÃO: ");
        scanf("%d", &opm);

		switch(opm){
            
            case 1: system("clear||cls");
            printf("add ai carai");
            
            system("Pause");
            break;
        	
        
            
        }	
	}
