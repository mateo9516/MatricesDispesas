#ifndef CSC_H
#define CSC_H
#include <iostream>
using namespace std;


class CSC
{

private:
    int n;
    int repre[1000];
    int **matriz;
    int ccolumnas[];
    int valores[];
    int filas[];

public:
    //se definen 3 constructores, el primero sin parametros por practicas
    CSC(int n);
    CSC(int n, int **m);//un constructor al cual le ingresan una matriz
    CSC(int valores[],int filas[], int ccolumnas[]);//un constructor con 3 arreglos pertenecientes a la represntacion

    //Metodos requeridos por el proyecto
    void crearMatriz(int v[],int f[], int cc[]);
    void representacion(int matriz[][100]);
    int getElemento(int repre[],int i, int j); //cambiar CSC por tabla hash
    void getFila(int repre[],int i); //cambiar CSC por tabla hash
    void getColumna(int repre[],int j); //cambiar CSC por tabla hash
    void setPosicion(int repre[],int i, int j,int e); //cambiar CSC por tabla hash
    void sumaMatrices(int repre1[],int repre2[]);//cambiar CSC por tabla hash
    void transpuesta(int repre[]);
};

#endif // CSC_H
