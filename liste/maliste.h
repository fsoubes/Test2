#ifndef ___MALISTE___
#define ___MALISTE___

typedef struct liste *ptr_liste;


extern void  ajouter(int numero, ptr_liste maliste);
extern ptr_liste  ajouter_premier(int numero);
extern void afficher (ptr_liste maliste);
extern void supprimer(int numero,ptr_liste maliste);

#endif
