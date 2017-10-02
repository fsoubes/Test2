#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 10
#define MAX_ANIMAUX 5




int affichemenu()
{
  int choix;
  printf("\n inserez les noms des animaux, tappez 1\n");
  printf("inserez les poids des animaux, tappez 2\n");
  printf("affichez les details des animaux , tappez 3\n");
  printf("Changer le poids d'un animal , tappez 4\n");
  printf("Changer le nom d'un animal , tappez 5\n");
  printf("Quitter, tappez 0\n");
  scanf("%d",&choix);
  return choix;
}



char chaine[MAX_CHAR];
  
char *nom;
char *ListeNom[MAX_ANIMAUX];
int ListePoids[MAX_ANIMAUX];


void remplirnom()
{
  int i =0;
  for ( i =0 ; i< MAX_ANIMAUX ; i++)
    {
      puts("Nom :");
      fscanf(stdin,"%s", chaine);
      nom = (char*) malloc (sizeof(char)*strlen(chaine)+1);
      strcpy(nom,chaine);
      ListeNom[i]= nom;
    }
}
void remplirpoids()
{
  int i = 0;
  int poids;
  for ( i =0 ; i< MAX_ANIMAUX ; i++)
    {
      
      puts("Poids :");
      fscanf(stdin,"%d",&poids); 
      ListePoids[i] = poids;
    }
}

void affichage(){
  int i;
  for (i=0;i<MAX_ANIMAUX;i++)
    {
      printf("\n numero %d \n",i);
      printf("Nom %s \n",ListeNom[i]);
      printf("Poid %d \n",ListePoids[i]);
    }

}


void modifpoids(){
  int i;
  int numero;
  int decision;
  int newpoids;
  printf("Selectionnez le numero de l'animal dont voulez vous changer le poids\n");
  scanf("%d",&numero);
  printf("le Nom est il bien %s ?\n",ListeNom[numero]);
  printf("Oui - 1\n"
          "Non - 2\n");
  scanf("%d", &decision);
  switch(decision)
    {
    case 1 :
      printf("inserez le nouveau poids de l'animal \n");
      scanf("%d",&newpoids);
      ListePoids[numero]=newpoids;
      break;

    case 2:
      break;

      }
}

void modifnom(){
  int i;
  int numero;
  int decision;
  char *newnom;
  printf("Selectionnez le numero de l'animal dont voulez vous changer le nom\n");
  scanf("%d",&numero);
  printf("le Nom est il bien %s ?\n",ListeNom[numero]);
  printf("Oui - 1\n"
          "Non - 2\n");
  scanf("%d", &decision);
  switch(decision)
    {
    case 1 :
      printf("inserez le nouveau nom de l'animal \n");

      fscanf(stdin,"%s", chaine);
      newnom = (char*) malloc (sizeof(char)*strlen(chaine)+1);
      strcpy(newnom,chaine);
      ListeNom[numero]=newnom;
      break;
      
    case 2:
      break;

      }
}


int main ( int argc, char * argv[]){

  int yolo = 0;
  while (yolo !=2)
    {
      switch(affichemenu())
	{
	case 1 :
	  remplirnom();
	  break;
	case 2 :
	  remplirpoids();
	  break;
	case 3:
	  affichage();
	  break;
	case 4:
	  affichage();
	  modifpoids();
	  break;
	case 5:
	  affichage();

	  modifnom();
	  break;
	case 0:
	  exit();
	   break;
	default:
	  printf("Attention ! Mauvais numero\n");
	  affichemenu();
	  break;

	}
    }

    }

      switch(affichemenu())
	{
	case 1:	    
	  for(i =0 ; i<MAX_ANIMAUX ; i++){
	    tab[i] = saisie()	    nom = saisie_nom();
	    tableau[i] = nom;
	    printf("%s\n",nom);
	  }
  affiche(tableau,tab);

  

