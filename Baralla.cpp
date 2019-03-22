#include <cstdlib>

#include "Baralla.h"

using namespace std;


unsigned Baralla::a_llavor = 1;

//Constructors
Baralla::Baralla(int llavor, int passos){
    Baralla::a_llavor=llavor;
    a_numCartes=52;
    reservar();
}


Baralla::Baralla(const Baralla & b){
    copiar(b);
}

//Destructor
Baralla::~Baralla(){
    alliberar();
}





//Operadors
Baralla & Baralla::operator =(const Baralla &elem) {
    if (&elem != this) {

        delete [] a_taula; // allibera l’espai previ
        a_numCartes = elem.a_numCartes;

        a_taula = new Carta[elem.a_numCartes]; // reserva el nou espai

        for(int i=0; i<a_numCartes; i++) // elements apuntats
            a_taula[i] = elem.a_taula[i];
    }

    return(*this);
}


//privades
void Baralla::alliberar(){
    delete [] a_taula;
}

void Baralla::reservar() {
    a_taula = new Carta[a_numCartes];
}


void Baralla::copiar(const Baralla &b) {
    a_numCartes = b.a_numCartes;
    reservar();
    for(int i=0; i<a_numCartes; i++)
        a_taula[i] = b.a_taula[i];
}

void Baralla::inicialitzarBaralla(){
    int maxColl=a_numCartes/4;
    for (int i=0;i<maxColl;i++)
    {
        a_taula[i]=Carta(i,Carta::PIQUES);
        a_taula[i+1*maxColl]=Carta(i+1*maxColl,Carta::CORS);
        a_taula[i+2*maxColl]=Carta(i+2*maxColl,Carta::DIAMANTS);
        a_taula[i+3*maxColl]=Carta(i+3*maxColl,Carta::TREBOLS);
    }
}


//Metodes aleatoris
void Baralla::iniLlavor(int llavor)
{
// metode de classe
    a_llavor = abs(llavor);
    if (a_llavor == 0)
        a_llavor++;
}


int Baralla::aleatori(int max)
{
    a_llavor = a_llavor * 1103515245 + 12345;
    int res = (a_llavor/32) % 32768;

    return res % max;
}

