#ifndef CARTA_H
#define CARTA_H
#include <string>

class Carta
{
    public:
        static const char DIAMANTS='d';
        static const char CORS='c';
        static const char PIQUES='P';
        static const char TREBOLS='T';

        //Constructors
        Carta();
        //Pre:--
        //Post: crea una carta 1 de piques

        Carta(int valor, char pal);
        //Pre:--
        //Post: crea la carta de valor i del pal corresponents

    protected:

    private:
        char a_valor;
        char a_pal;
};

#endif // CARTA_H
