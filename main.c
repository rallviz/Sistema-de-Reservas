#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "restaurante.h"


int main(){
	
	setlocale(LC_ALL,"portuguese");
	Fila *rv = fila_cria();
    MenuRestaurante();
    
	return 0;
}
	void MenuRestaurante(){
 		int op;
 		int comp = 1;
     
     while(comp == 1){   
        printf("  //////////////////////////////////////////////////\n");
        printf("  ///   === BASTONE DI FERRO RESTAURANT'S ===    ///\n");
        printf("  //////////////////////////////////////////////////\n");
        printf("  ///                                            ///\n");
        printf("  ///          [1] - LOCALIZACAO;                ///\n");      
        printf("  ///          [2] - HORARIO DE ABERTURA;        ///\n");
        printf("  ///          [3] - HORARIO DE FECHAMENTO;      ///\n");
        printf("  ///          [4] - TOTAL DE MESAS;             ///\n");
        printf("  ///          [5] - TOTAL DE RESERVAS;          ///\n");
        printf("  ///          [6] - RESERVAS;                   ///\n");
        printf("  ///                                            ///\n");
        printf("  //////////////////////////////////////////////////\n");

        printf("\n  INSIRA A OPÇÃO: ");
        scanf("%d", &op);

        switch(op){
            
            case 1: 
			system("clear||cls");
            system("pause");
            break;
        	
        	case 2: 
			system("clear||cls");
            system("pause");
            break;
        	
        	case 3: 
			system("clear||cls");
            system("pause");
            break;
        
        	case 4: 
			system("clear||cls");
            system("pause");
            break;
        	
        	case 5: 
			system("clear||cls");
            system("pause");
            break;
        	
			case 6: 
			system("clear||cls");
			MenuReserva();
			system("pause");
            break;
        }

    }
}
	void MenuReserva(){
        
   	    int opm = 1; //atribui a opcao do menu ("opm") inserida pelo usuario.

        while(opm==1){
		
		printf("  //////////////////////////////////////////////////\n");
        printf("  ///            ======= MENU =======            ///\n");
        printf("  //////////////////////////////////////////////////\n");
        printf("  ///                                            ///\n");
        printf("  ///          [1] - ADICIONAR RESERVA;          ///\n");
        printf("  ///          [2] - EXCLUIR RESERVA;            ///\n");
        printf("  ///          [3] - LISTAR RESERVAS;            ///\n");
        printf("  ///          [4] - EDITAR RESERVA;             ///\n");
        printf("  ///          [5] - BUSCAR RESERVA;             ///\n");
        printf("  ///          [6] - CONSULTAR RESERVA;          ///\n");
        printf("  ///          [7] - SAIR;                       ///\n");
        printf("  ///                                            ///\n");
        printf("  //////////////////////////////////////////////////\n");
        
        printf("\n  INSIRA A OPÇÃO: ");
        scanf("%d", &opm);

		switch(opm){
            
            case 1: system("clear||cls");
            addReserva(rv);
            system("Pause");
            break;

            case 2: system("clear||cls");
            system("Pause");
            break;
            
            case 3: system("clear||cls");
            system("Pause");
            break;
        
			case 4: system("clear||cls");
            system("Pause");
            break;
        
            case 5: system("clear||cls");
            system("Pause");
            break;
        
            case 6: system("clear||cls");
            system("Pause");
            break;
        
			case 7: system("clear||cls");
            system("Pause");
            break;
            
        }	
	}
}