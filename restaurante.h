typedef struct restaurante Restaurante;
typedef struct reserva Reserva;
typedef struct fila Fila;

Fila* fila_cria(void);

void MenuRestaurante();

//Menu Restaurante
void local();
void horaOpen();
void horaClose();
void total_mesa();
void total_reserva();

//Menu Reserva
void MenuReserva();

void addreserva();
void delreserva();
void editreserva();
void buscareserva();
void consultar();


