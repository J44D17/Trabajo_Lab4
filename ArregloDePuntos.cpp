#include <iostream>
#include "ArregloDePuntos.h"

using namespace std;

int main(){

Punto punto1(14,7);
    Punto punto2(10,13);
    Punto punto3(9,6);

    Punto arreglo[]={punto1,punto2};
    ArregloDePuntos puntos(arreglo,2);

    cout<<endl<<puntos.getSize();
    
    puntos.push_back(Punto(4,6);

    cout<<endl<<puntos.getSize()<<endl;
    for(int i=0;i<puntos.getSize();i++)
        cout<<puntos.punto[i].getY()<<endl;
    puntos.insert(0,punto3);

    cout<<endl<<puntos.getSize();

    for(int j=0;j<puntos.getSize();j++)
        cout<<puntos.punto[j].getY()<<endl;
    puntos.remove(2);

    for(int k=0;k<puntos.getSize();k++)
        cout<<puntos.punto[k].getY()<<endl;
    cout<<puntos.getSize();
    puntos.clear();

    for(int l=0;l<4;l++)
        cout<<puntos.punto[l].getY()<<endl;
    cout<<puntos.getSize();
}