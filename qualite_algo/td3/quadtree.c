

struct Noeud{
    float min;
    float max;
    struct Noeud * noeudNO;
    struct Noeud * noeudNE;
    struct Noeud * noeudSO;
    struct Noeud * noeudSE;
    int nbelements;
    int tabLimit;
};

struct spriteR{
    float xmin;
    float ymin;
    float xmax;
    float ymax;
};

struct spritec{
    float x;
    float y;
    float rayon;
};

int nb_calcul(int n){
    int res=0;
    for (int i=1;i<=n;i++){
        res+=i;
    }
    return res;
};