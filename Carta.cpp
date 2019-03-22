#include "Carta.h"

Carta::Carta()
{
    a_pal=Carta::PIQUES;
    a_valor='1';
}

Carta::Carta(int valor, char pal){

    a_pal=pal;

    if (valor<10 )
        a_valor= (char)(valor+48);
    //48 es el 0 en ascii
    else if(valor==10)
        a_valor='D';
    else if(valor==11)
        a_valor='J';
    else if (valor==12)
        a_valor='Q';
    else if(valor==13)
        a_valor='K';

}
