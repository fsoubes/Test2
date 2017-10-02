#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
#define MAX_CHAR 10
#define MAX_ANIMAUX 2

typedef struct Animal *ptr_Animal;


int saisie();
char* saisie_nom();
int affichemenu();
void affiche(ptr_Animal Animalerie[MAX_ANIMAUX]);
void creer_Animalerie(ptr_Animal *Animalerie);
void creer_Animalerie1(ptr_Animal Animalerie[MAX_ANIMAUX]);


struct Animal {
  char* nom ;
  int poids ;
};

//ptr_Animal Animalerie[MAX_ANIMAUX];

int main()
{
  ptr_Animal Animalerie[MAX_ANIMAUX];
  //int tab[MAX+1];
  //char *tableau[MAX+1];
  char* nom;
  int poids;
  int i;
  int cpt = 2;
  /*
  for (i=0;i<MAX_ANIMAUX;i++){
    ptr_Animal pitem=(ptr_Animal)malloc(sizeof(struct Animal));
    Animalerie[i] = pitem;
  }
  */
  
  while(cpt !=0) // ou while(1) 1 -> true; exit(0) -> false
    {
      switch(affichemenu())
	{
	case 1:	    
	  //for(i =0 ; i < MAX_ANIMAUX  ; i++){
	    //nom = saisie_nom();
	    //tableau[i] = nom;
	    //Animalerie[i]->nom=saisie_nom();
	  creer_Animalerie(Animalerie);
	  
	    //}
	  break;
	case 2:
	  //for(i =0 ; i<MAX_ANIMAUX ; i++){
	    //poids = saisie();
	    //tab[i] = poids;
	  //Animalerie[i]->poids=saisie();		    
	  //}
	  affiche(Animalerie);
	  break;
	case 0:
	  printf("see you next time");
	  exit(0);
	  break;
	default:
	  printf("Attention ! Mauvais numero\n");
	  affichemenu();
	  break;
	}
    }
}
	  	   

int saisie() {
  int poids;
  printf("poids de notre animal?\n");
  puts("Poids : ");
  fscanf(stdin, "%d", &poids);
  return poids;
}

char* saisie_nom(){
  puts("Nom");
  char *nom = (char*) malloc(sizeof(char)*10 +1);
  printf("nom de votre animal?\n");
  scanf("%s",nom);
  return nom;
}

void affiche(ptr_Animal Animalerie[MAX_ANIMAUX])
{
  //int compteur =0 ;
  int i ;
  for (i=0 ; i<MAX_ANIMAUX;i++){
    printf("poids de l'animal\n");
    printf("%d\n",Animalerie[i]->poids);
    puts("Noms de l'animal");
    printf("%s\n",Animalerie[i]->nom); 
  }
}
  
void creer_Animalerie(ptr_Animal *Animalerie)
{
  int i =0 ;
  for (i=0;i<MAX_ANIMAUX;i++){
    ptr_Animal pitem=(ptr_Animal)malloc(sizeof(struct Animal));
    Animalerie[i] = pitem;
    Animalerie[i]->nom=saisie_nom();
    Animalerie[i]->poids=saisie();
    
  }
  
}




int affichemenu()
{
  int choix;
  printf("\ninserez les noms et poids des animaux, tappez 1\n");
  printf("affichez les details des animaux , tappez 2\n");
  printf("Quitter, tappez 0\n");
  scanf("%d",&choix);
  return choix;
}



void creer_Animalerie1(ptr_Animal Animalerie[MAX_ANIMAUX])
{
  int i;
  char chaine[25];
  int poids;
  for (i=0;i<MAX_ANIMAUX;i++)
    {
      printf("nom de votre animal");
      scanf("%s",chaine);
      printf("poids de l'animal");
      scanf("%d",&poids);
      ptr_Animal item=(ptr_Animal)malloc(sizeof(struct Animal));
      item ->nom=(char *)malloc(sizeof strlen(chaine));
      strcpy(item->nom,chaine);
      item-> poids = poids;
      Animalerie[i] = item;
    }
}
