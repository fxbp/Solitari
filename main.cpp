#include <iostream>
#include "Baralla.h"


using namespace std;

void llegirValors(int & llavor, int & passos){
//Pre:--
//Post: a llavor hi queda el valor de la llavor del nombre aleatori llegit per teclat
        //a passos hi queda el nombre de vegades que es barrejara la baralla
        cout << "ENTRA LA LLAVOR:" << endl;
        cin >> llavor;
        cout << "ENTRA ELS PASSOS:";
        cin >> passos;

}

int main()
{
    int llavor, passos;
    llegirValors(llavor, passos);
    Baralla baralla(llavor, passos);
    Joc joc(baralla);
    joc.mostrar();
return 0;
}
