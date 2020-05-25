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