//Juan Carlos Perez Ramirez
https://www.onlinegdb.com/#editor_1
#include <iostream>

using namespace std;


struct Particula{
    double masa;
    double posicion;
    double velocidad;
};

int main() {
    Particula part;
    
    part.masa = 1.0;
    part.posicion = 0.0;
    part.velocidad = 1.0;
    
    double Ec = 0.5*part.masa*part.velocidad*part.velocidad;
    
    cout << "Energia cinetica = " << Ec;

    return 0;
}
