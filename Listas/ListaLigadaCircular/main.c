// Aquí van las instrucciones del programa

#include "listaligadacircular.h"

int main(void) {

  struct ListaLigada *milista = NULL;

  insertaralprincipio(&milista, 10);
  insertaralprincipio(&milista, 20);
  insertaralprincipio(&milista, 30);
  insertaralprincipio(&milista, 40);
  insertaralprincipio(&milista, 50);
  insertaralprincipio(&milista, 60);
  insertaralprincipio(&milista, 70);

  mostrar(milista);

  printf("La lista contiene: %d elementos\n", numero_elementos(milista));

  return 0;
}