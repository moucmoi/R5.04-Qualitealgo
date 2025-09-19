#include <cstddef>
#ifndef LISTE_H
#define LISTE_H

/**
BUT3 Info Orleans R504 - fichier d'en-tête pour les listes chainées
*/

/**
Un maillon contient une valeur entière et un pointer vers un autre maillon
*/
struct maillon {
    int val;
    struct maillon *suivant;
};

/**
Une liste est constitué de son premier maillon (potentiellement vide) et
du nombre d'élément contenus dans la liste.
*/
struct liste {
    struct maillon * debut;
    int nbElem;
};

typedef struct maillon* ml ;
typedef struct liste* lst;

lst creerListe(){
    lst l =(lst) malloc(sizeof(struct liste));
    l->nbElem=0
    return l;
    /** 
    lst list;
    list->debut=NULL;
    list->nbElem=0;
    return list; 
    */
    
};


void supprimerListe(lst l){
    /**
    maillon * elem=l.debut;
    for(int i=0;i<l->nbElem;i++){
        maillon * temp=elem;
        elem.free();
        elem=temp->suivant; 
    }
    l.free()
    */
    while(l->nbElem>0){
        supprimerEnTete(l);
    }
};


void ajouterEnTete(lst l, int x){
    int nb_elem=l->nbElem;
    maillon * maaaa=l->debut;
    lst list=creerListe();
    maillon m;
    m.val=x;
    m.suivant=maaaa;
    list->debut=m;
    list->nbElem=nb_elem+1;
};



void inserer(lst l, int val, int i){
    if(int i==0){
        ajouterEnTete(l,val);
    }
    else{
        maillon * mail =l.debut;
        int j=0
        while (j<=i)
        {
            if (j=i-1){
                maillon * prec=mail;
            }
            mail=maillon.suivant;
        }
        ml nouveau;
        nouveau.val=val;
        nouveau.suivant=mail;
        prec.suivant=nouveau;
    }
};



int supprimerEnTete(lst l){
    lst nouvelle_liste;
    nouvelle_liste->debut=l->debut->suivant;
    nouvelle_liste->nbElem=l->nbElem-1;
    free(l->debut);
    free(l);
};


int supprimer(lst l, int i){
    
};
void afficherListe(lst l);

#endif
