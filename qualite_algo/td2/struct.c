#include <stdio.h>

struct coords
{
    float x;
    float y;
    float z;
    char a;
};

#define COORDS struct coords

void main(){
    COORDS monObjet3d;
    monObjet3d.x=2.0f;
    monObjet3d.y=2.0f;
    monObjet3d.z=2.0f;
    float val=monObjet3d.x*monObjet3d.y*monObjet3d.z;
    printf("%f\n",val);
    printf("%ld\n",sizeof(monObjet3d));
    
}