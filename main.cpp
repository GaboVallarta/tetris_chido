#include <iostream>
#include <vector>
#include "tablero.h"
using namespace std;

/// hay que ponerle lo de que cuando sean 1 que se vean en el tablero

class Base{
    public:
    int tamanioBase;
    vector<vector<int>>espacioBase;

    void establecer(){
        vector<int>linea;
        for(int i=0;i<tamanioBase;i++){
            linea.push_back(0);
        }

        for(int i=0;i<tamanioBase;i++){
            this->espacioBase.push_back(linea);
        }
    }

    void spawn(vector<vector<int>>&matriz){
         for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                 matriz[0+i][4+j]=this->espacioBase[i][j];
         }
        
        }

        
    }

};

class Ele:public Base{
   
    int tamanioBase=3;
    vector<vector<int>>espacioBase;

    void forma(){
        espacioBase[0][0]==1;
        espacioBase[0][1]==1;
        espacioBase[0][2]==1;
    }

};

vector <vector<int>> matriz;

Ele figura1;


int main(){
    crear(matriz);
    figura1.establecer();
    figura1.spawn(matriz);
    mostrar(matriz);
    
    
    return 0;
}