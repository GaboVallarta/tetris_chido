#include <iostream>
#include <vector>
using namespace std;

class Base{
    public:
    virtual int tamanioBase(){return 3;}
    vector<vector<int>>espacioBase;

    virtual void establecer(){
        vector<int>linea;
        for(int i=0;i<3;i++){
            linea.push_back(0);
        }

        for(int i=0;i<tamanioBase();i++){
            this->espacioBase.push_back(linea);
        }
    }

    virtual void spawn(vector<vector<int>>&matriz,int x, int y){
         for(int i=0;i<3;i++){
             for(int j=0;j<3;j++){
                 matriz[1+i+y][4+j+x]=this->espacioBase[i][j];
         }
        
        }

        
    }
    virtual void forma(){
        espacioBase[0][0]=1;
        espacioBase[0][1]=1;
        espacioBase[0][2]=1;
    }
    virtual bool mover(vector<vector<int>>&matriz){
        
    }

};

class Ele:public Base{
   public:
    
    void forma(){
        espacioBase[0][1]=1;
        espacioBase[1][1]=1;
        espacioBase[2][1]=1;
        espacioBase[2][2]=1;
    }
    

};

class EleInvertida:public Base{
   public:
    
    void forma(){
        espacioBase[0][1]=1;
        espacioBase[1][1]=1;
        espacioBase[2][1]=1;
        espacioBase[2][0]=1;
    }
    

};

class Zeta: public Base{
    public:
    void forma(){
        espacioBase[1][0]=1;
        espacioBase[1][1]=1;
        espacioBase[2][1]=1;
        espacioBase[2][2]=1;
    }
};

class ZetaInvertida: public Base{
    public:
    void forma(){
        espacioBase[1][2]=1;
        espacioBase[1][1]=1;
        espacioBase[2][1]=1;
        espacioBase[2][0]=1;
    }
};

class Te: public Base{
    public:
    void forma(){
        espacioBase[1][0]=1;
        espacioBase[1][1]=1;
        espacioBase[1][2]=1;
        espacioBase[2][1]=1;
    }
};

class Linea: public Base{
    public:
    int tamanioBase(){return 4;}

    void establecer(){
        vector<int>linea;
        for(int i=0;i<4;i++){
            linea.push_back(0);
        }

        for(int i=0;i<tamanioBase();i++){
            this->espacioBase.push_back(linea);
        }
    }


    void spawn(vector<vector<int>>&matriz,int x, int y){
         for(int i=0;i<4;i++){
             for(int j=0;j<4;j++){
                 matriz[1+i+y+x][4+j]=this->espacioBase[i][j];
         }
        
        }

        
    }

    void forma(){
        espacioBase[0][0]=1;
        espacioBase[0][1]=1;
        espacioBase[0][2]=1;
        espacioBase[0][3]=1;
    }

};

class Cuadrado: public Base{
    public:
    int tamanioBase(){return 2;}

    void establecer(){
        vector<int>linea;
        for(int i=0;i<2;i++){
            linea.push_back(0);
        }

        for(int i=0;i<tamanioBase();i++){
            this->espacioBase.push_back(linea);
        }
    }


    void spawn(vector<vector<int>>&matriz,int x, int y){
         
         for(int i=0;i<2;i++){
             for(int j=0;j<2;j++){
                 matriz[1+i+y][4+j+x]=this->espacioBase[i][j];
         }
        
        }

        
    }

    void forma(){
        espacioBase[0][0]=1;
        espacioBase[0][1]=1;
        espacioBase[1][0]=1;
        espacioBase[1][1]=1;
    }

};
