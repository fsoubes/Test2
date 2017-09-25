#include <stdio.h>
#include <stdlib.h>
#include "maliste.h"



struct liste{
  int val;
  ptr_liste next;
};

void  ajouter(int numero, ptr_liste maliste);
ptr_liste  ajouter_premier(int numero);
void afficher (ptr_liste maliste);
void supprimer(int numero,ptr_liste maliste);


void supprimer(int numero,ptr_liste maliste)
{
  ptr_liste precedent;
  while(maliste->next && maliste->val != numero)
    {
      precedent=maliste;
      maliste=maliste->next;
    }

  if (!(maliste->next))
    {
      printf ("Cette valeur %d n'etait pas dans la liste",numero);
      return;
    }
  precedent->next=maliste->next;
  free(maliste);
}


ptr_liste ajouter_premier(int numero)
{
  ptr_liste temp;
  temp = (ptr_liste)malloc (sizeof(struct liste));
  temp->val =numero;
  temp->next = NULL;
  return(temp);
}

void ajouter(int numero, ptr_liste maliste)
{
  ptr_liste temp;
  temp = (ptr_liste)malloc (sizeof(struct liste));
  temp->val =numero;
  temp->next = NULL;
  while(maliste->next)
    {
      maliste=maliste->next;
    }
  maliste->next=temp;
}

void afficher (ptr_liste maliste)
{

  while (maliste)
    {
      printf ("la liste contient %d \n",maliste->val);
       maliste=maliste->next;
       printf("isok");
    }
}


