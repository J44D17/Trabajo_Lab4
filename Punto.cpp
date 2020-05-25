#include<iostream>
#include"punto.h"

using namespace std;

int main(){
    Punto pon(12,13);
    pon.setX(4);
    cout<<pon.getX();
    pon.setY(5);
    cout<<pon.getY();
    return 0;
}
