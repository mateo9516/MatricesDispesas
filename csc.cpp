#include "csc.h"

CSC::CSC(int n)
{
    matriz = new int*[n];
    for(int i = 0; i < n; i++){
        matriz[i] = new int[n];
    }
    for(int i = 0; i< n; i++)
        {
            for(int j = 0; j< n; j++)
            {
                matriz[i][j]=0;
            }
        }
}
CSC::CSC(int n, int** m)
{
    m = new int*[n];
    for(int i = 0; i < n; i++){
        m[i] = new int[n];
    }
    matriz=m;
}

void CSC::crearMatriz(int v[], int f[], int cc[])
{


    int ini=0;
    int fin=0;
    int i=1;
    while(i<=sizeof(matriz))
    {

        fin += (cc[i]-cc[i-1])-1;
        for(ini;ini<=fin;ini++)
        {
            int valor=v[ini];
            matriz[i-1][f[ini]]=valor;
        }
        i++;
    }
    for(int m=0;m<=4;m++)
    {
        for(int k=0;k<=4;k++)
        {
            cout<<matriz[m][k]<<" ";
        }
        cout<<endl;
    }
    ini=fin;
}
