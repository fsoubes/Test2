#include <stdio.h>
#include <stdlib.h>
#include "maliste.h"

int main()
{
  ptr_liste maliste=NULL;
  int numero;
  printf("donner un nombre");
  scanf("%d",&numero);
  printf("test");
 
  while (numero)
    {
       if (!(maliste))
         maliste=ajouter_premier(numero);
       else
         ajouter(numero,maliste);
       printf("donner un nombre");
       scanf("%d",&numero);
    }
  int valeur;
  printf("donner un chiffre a supprimer");
  scanf("%d",&valeur);
  afficher(maliste);
  printf("\nje supprime 9");
  supprimer(valeur,maliste);
  printf("\nconfirmation");
  afficher(maliste);

}
