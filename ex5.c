#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 10
#define MAX_ANIMAUX 5


int main(int argc, char * argv[])
{
  char chaine[MAX_CHAR];
  int poids;
  char *nom;
  char *ListeNom[MAX_ANIMAUX];
  int ListePoids[MAX_ANIMAUX];
  int i;
  for ( i =0 ; i< MAX_ANIMAUX ; i++)
    {
      puts("Nom :");
      fscanf(stdin,"%s", chaine);
      nom = (char*) malloc (sizeof(char)*strlen(chaine)+1);
      strcpy(nom,chaine);
      //stdlib(nom,chaine);
      puts("Poids :");
      fscanf(stdin,"%d",&poids);
      ListeNom[i]= nom;
      ListePoids[i] = poids;
      
    }
  for (i=0;i<MAX_ANIMAUX;i++)
    {
      printf("Nom %s \n",ListeNom[i]);
      printf("Poid %d \n",ListePoids[i]);
    }
  
}
  
  
  


    

  
