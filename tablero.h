#include <iostream>
#include <vector>
using namespace std;

void crear(vector<vector<int>>&matriz){
    vector<int>linea;
    for(int i=0;i<12;i++){
        linea.push_back(0);
        if(i==0||i==11){
            linea[i]=4;
        }
    }

    for(int i=0;i<22;i++){
        matriz.push_back(linea);
    }

    for(int i=0;i<12;i++){
        matriz[0][i]=4;
         matriz[21][i]=4;
    }

}


void mostrar(vector<vector<int>>&matriz){
    for(int i=0;i<22;i++){
        for(int j=0;j<12;j++){
            if(matriz[i][j]==0){
                cout<<"[ ]";
            }
            if(matriz[i][j]==4){
                cout<<"!!!";
            }
            
        }
        cout<<endl;
    }
}

