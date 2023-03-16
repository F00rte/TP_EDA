#include <stdio.h>

typedef struct registo
{int codigo; // código do meio de mobilidade elétrica
 char modelo[50];
 float bateria;
 float autonomia;
 struct registo* seguinte; // endereço de memória para uma struct registo
} Meio;


// Inserção de um novo registo
Meio* inserirMeio(Meio* inicio, int cod, char modelo[], float bat, float aut); 

// listar na consola o conteúdo da lista ligada
void listarMeios(Meio* inicio); 

// Determinar existência do 'codigo' na lista ligada 'inicio'
int existeMeio(Meio* inicio, int codigo); 

// Remover um meio a partir do seu código
Meio* removerMeio(Meio* inicio, int cod);