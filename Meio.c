#include <stdlib.h>
#include <string.h>
#include "Meio.h"

// InserÃ§Ã£o de um novo registo
// inserÃ§Ã£o realizada no inÃ­cio da lista ligada
Meio* inserirMeio(Meio* inicio, int cod, char modelo[], float bat, float aut)
{
 if (!existeMeio(inicio, cod)) {Meio* novo = malloc(sizeof(struct registo));
  if (novo != NULL)
  {novo->codigo = cod;
   strcpy(novo->modelo,modelo);
   novo->bateria = bat;
   novo->autonomia = aut;
   return(novo);
  }
 } else return(inicio);
}

// listar na consola o conteÃºdo da lista ligada
void listarMeios(Meio * inicio)
{while (inicio != NULL)
 {printf("%d %s %.2f %.2f\n",inicio->codigo,inicio->modelo, 
                     inicio->bateria, inicio->autonomia);
  inicio = inicio->seguinte;
 }
}


// Determinar existÃªncia do 'codigo' na lista ligada 'inicio'
// devolve 1 se existir ou 0 caso contrÃ¡rio
int existeMeio(Meio* inicio, int codigo)
{while(inicio!=NULL)
  {if (inicio->codigo == codigo) return(1);
   inicio = inicio->seguinte;
  }
 return(0);
}

/*
Meio* removerMeio(Meio* inicio, int cod) // Remover um meio a partir do seu cÃ³digo
{while (inicio!=NULL)
 {if (inicio->codigo==cod) 
     {aux = inicio->seguinte;
          free(inicio);
      return(aux);
     }
  else {inicio = removerMeio(inicio->seguinte,cod);
    return(inicio);
       }
 }
}/


// Remover um meio a partir do seu cÃ³digo{
Meio removerMeio(Meio* inicio, int cod) 
{
 Meio anterior=inicio,atual=inicio, *aux;

 if (atual==NULL) return(NULL); // lista ligada vazia
 else if (atual->codigo == cod) // remoÃ§Ã£o do 1Âº registo
 {aux = atual->seguinte;
  free(atual);
  return(aux);
 }
 else
 {while ((atual!=NULL)&&(atual->codigo!=cod)) 
  {anterior = atual;
   atual = atual->seguinte;
  }
  if (atual==NULL) return(inicio);
  else
  {anterior->seguinte = atual->seguinte;
   free(atual);
   return(inicio);
  }
 }
}
*/