//Juan Carlos Perez Ramirez
#include <iostream>
#include <cmath>

using namespace std;

class Particula {
    public:
        double masa; //masa de la Particula
        double xPos; //posicion en eje x
        double yPos; //posicion en eje y
        
    //METODOS
    double calcularDistancia(double x, double y) {
        double distancia = sqrt(pow(xPos-x,2) + pow(yPos-y,2));
        return distancia;
    }
};

int main()
{
    //DEFINICION DE LA PARTICULA Y SUS ATRIBUTOS
    Particula part;
    
    cout<<"Ingrese masa de la particula: ";
    cin >> part.masa;
    
    cout<<"Ingrese la coordenada X de la particula: ";
    cin >> part.xPos;
    
    cout<<"Ingrese la coordenada Y de la particula: ";
    cin >> part.yPos;
    
    cout<<"La masa de la particula es "<<part.masa<<'\n';
    cout<<"Las coordenadas de la particula son ("<<part.xPos<<","<<part.yPos<<")"<<endl;
    
    //LLAMADA AL METODO
    double x2, y2;
    cout<<"Ingresar coordenada X de la particula de referencia: ";
    cin >> x2;
    cout<<"Ingresar coordenada Y de la particula de referencia: ";
    cin >> y2;
    
    double dist = part.calcularDistancia(x2,y2);
    
    cout<<"\nLa distancia entre las dos particulas es "<<dist;

    return 0;
}
