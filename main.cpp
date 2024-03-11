#include <iostream>
#include <vector>
#include "tablero.h"
#include "figuras.hpp"
using namespace std;

/// hay que ponerle lo de que cuando sean 1 que se vean en el tablero



vector <vector<int>> matriz;

Base* figura1=new Ele;



int main(){
    crear(matriz);
    figura1->establecer();
    figura1->forma();
    figura1->spawn(matriz);
    mostrar(matriz);
    
    return 0;
};