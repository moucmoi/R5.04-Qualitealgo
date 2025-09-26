#include <cstddef>
#include <stdio.h>
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
    /** 
    int nb_elem=l->nbElem;
    maillon * maaaa=l->debut;
    lst list=creerListe();
    maillon m;
    m.val=x;
    m.suivant=maaaa;
    list->debut=m;
    list->nbElem=nb_elem+1;
    */
   ml Nouvel_elem=(ml) malloc (sizeof(struct maillon));
   Nouvel_elem->val=x;
   Nouvel_elem->suivant=l->debut;
   l->debut=Nouvel_elem;
   l->nbElem++;
};



void inserer(lst l, int val, int i){
    /**
    if( i==0){
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
        ml nouveau=(ml) malloc (sizeof(struct maillon));
        nouveau.val=val;
        nouveau.suivant=mail;
        prec.suivant=nouveau;
        l->nbElem+=1;
    }
     */
    if(i==0){
        ajouterEnTete(l,val);
    }
    else{
        int j=0;
        ml inter=l->debut;
        while (j< i-1){
            iter=inter->suivant;
            j++;
        }
        ml elem=(ml) malloc (sizeof(struct maillon));
        elem->val=val;
        elem->suivant=iter.suivant;
        iter.suivant=elem;
        l->nbElem++;
    }
};



int supprimerEnTete(lst l){
    ml *tete = l->debut;            // sauvegarder l'ancien premier
    l->debut = tete->suivant;       // avancer le début
    free(tete);                     // libérer l'ancien premier
    l->nbElem--;                    // décrémenter le compteur
    return 0;
};


int supprimer(lst l, int i){
    if (i == 0) {
        return supprimerEnTete(l);
    }

    // aller jusqu'au précédent (i-1)
    ml *prec = l->debut;
    for (int k = 0; k < i - 1; ++k) {
        prec = prec->suivant;       // garanti non NULL grâce au test des bornes
    }

    ml *cible = prec->suivant;      // noeud à supprimer
    prec->suivant = cible->suivant; // le “bypasser”
    free(cible);                    // libérer la mémoire
    l->nbElem--;
    return 0;

};



void afficherListe(lst l){
    /**
    char res = (char) l->debut->val;
    maillon * suivant=l->debut;
    for(int i=0;i<l->nbElem;i++){
        res = strcat(res,' ---> ');
        res = strcat(res,suivant->val);
        suivant=suivant->suivant;
    }
    printf(%s,res);
    */
   if(l->nbElem>0){
    ml iter=l->debut;
    while (iter!=NULL){
        printf("%d\n",iter.val);
        iter=iter->suivant;
    }
   }
};

#endif
