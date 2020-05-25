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