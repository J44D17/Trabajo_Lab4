#include<iostream>

using namespace std;

class Punto{
private:
    int x;
    int y;

public:
    Punto();
    Punto(int x,int y);
    Punto(Punto& point);
    string getX() const;
    string getY() const;
    
    void setX(const int nuevo_x);
    void setY(const int nuevo_y);
    
};
Punto::Punto(){
    x=0;
    y=0;
   
}
Punto::Punto(int x,int y){
    this->x=x;
    this->y=y;
    
}
Punto::Punto(Punto& point){
    this->x=point.x;
    this->y=point.y;
    
}
string Punto::getX() const{
    return this->x;
}
string Punto::getY() const{
    return this->y;
}

void Punto::setX(const int nuevo_x){
    this->x=x;
}
void Punto::setY(const int nuevo_y){
    this->y=y;
}

class ArregloDePuntos{
public:
    Punto *punto;
    int tam;
public:
    ArregloDePuntos(const Punto puntos[], const int tam);
    ArregloDePuntos(const ArregloDePuntos &o);
    void redimensionar(int n);
    void push_back(const Punto &p);
    void insert(const int posicion, const Punto &p);
    void remove(const int pos);
    const int getSize() const;
    void clear();
    ~ArregloDePuntos();
};
ArregloDePuntos::ArregloDePuntos(const Punto puntos[], const int tam){
    punto=new Punto[tam];
    this->tam=tam;
    for(int i=0;i<tam;i++)
        punto[i]=puntos[i];
}
ArregloDePuntos::ArregloDePuntos(const ArregloDePuntos &o){
    this->punto=new Punto[o.tam];
    this->tam=o.tam;
    for(int i=0;i<tam;i++)
        punto[i]=o.punto[i];
}
void ArregloDePuntos::redimensionar(int n){
    Punto *aux = new Punto[n];
    for(int i = 0; i < n ; i++){
        aux[i] = this->punto[i];
    }
    delete[] punto;
    punto = aux;
    tam=n;
}

void ArregloDePuntos::push_back(const Punto &p){
    (this->redimensionar(tam+1));
    this->punto[tam-1]=p;
}
void ArregloDePuntos::insert(const int posicion, const Punto &p){
    this->redimensionar(tam+1);
    for(int i=tam-1;i>posicion;i--)
        punto[i]=punto[i-1];
    punto[posicion]=p;
}
void ArregloDePuntos::remove(const int pos){
    for(int i=pos;i<tam;i++)
        punto[i]=punto[i+1];
    this->redimensionar(tam-1);
}
const int ArregloDePuntos::getSize() const{
    return this->tam;
}
void ArregloDePuntos::clear(){
    Punto vacio;
    for(int i=0;i<tam;i++)
        punto[i]=vacio;
    this->tam=0;
    cout<<"Clear";
}
ArregloDePuntos::~ArregloDePuntos(){
    cout<<"Destruido";
    delete[] punto;
}

int main(){
    Punto pon(12,13);
    pon.setX(4);
    cout<<pon.getX();
    pon.setY(5);
    cout<<pon.getY();

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

    return 0;
}
