#include <iostream>
#include <vector>
#include "tablero.h"
#include "rlutil.h"
#include "figuras.hpp"
using namespace std;
using namespace rlutil;

/// hay que ponerle lo de que cuando sean 1 que se vean en el tablero



vector <vector<int>> matriz;

Base* figura1=new Cuadrado;

int x=0,y=0;


int main(){
    crear(matriz);
    figura1->establecer();
    figura1->forma();
    figura1->spawn(matriz,x,y);
    mostrar(matriz);
    

    return 0;
};