#ifndef BARALLA_H
#define BARALLA_H

#include "Carta.h"


class Baralla
{
    public:
        // FALTEN ELS METODES NORMALS
        Baralla(int llavor, int passos);
        //Pre: pasos <=0
        //Post: Crea una baralla francesa i la barreja en funcio de passos

        Baralla(const Baralla &b);
        //Pre:--
        //Post: la baralla es una copia de b

        //Destructor
        ~Baralla();
        //Pre:--
        //Post: esborra la memoria de la baralla



        //obtenir la carta de la posicio indicada.


        //Operadors
        Baralla& operator=(const Baralla& b);
        //Pre:--
        //Post: copia la baralla b

    private:
        static void iniLlavor(int llavor);
        static int aleatori(int max);




        // FALTEN ELS ATRIBUTS NORMALS

        // atribut de classe
        static unsigned a_llavor;
        int a_numCartes;
        Carta* a_taula;


        void copiar(const Baralla &elem);
        //Pre:--
        //Post: copia la baralla

        void alliberar();
        //Pre:--
        //Post: allibera la memoria dinamica

        void reservar();
        //Pre:--
        //Post: reserva memoria dinamica

        void barrejarBaralla(int passos);
        //Pre: passos <=0
        //post: Barreja la baralla

        void inicialitzarBaralla();
        //Pre:--
        //Post: crea les cartes de la baralla
};

#endif // BARRALLA_H
