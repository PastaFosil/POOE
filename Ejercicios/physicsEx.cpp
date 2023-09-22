//Juan Carlos Perez Ramirez
#include <iostream>
#include <cmath>

using namespace std;

class ejercicios {
    public:
        void distanciaCaidaLibre(double t, double g) {
            double distancia = 0.5*g*t*t;
            
            cout<<"\nLa distancia recorrida es de "<<distancia<<"m.";
        };
        
        void distanciaHorizontal(double t, double v) {
            double distancia = v*t;
            
            cout<<"\nLa distancia recorrida es de "<<distancia<<" m.";
        };
        
        void energiaCinetica(double m, double v) {
            double K = 0.5*m*v*v;
            
            cout<<"\nLa energia cinetica es de "<<K<<" J.";
        };
        
        void resorte(double k, double m, double x0) {
            for (int t = 0; t<=30; t++) {
                double posicion = x0*sin(sqrt(k/m)*t); // Calculo de la posicion respecto al punto de equilibrio
                int rescale = 21*(1+posicion/x0); // Reescalamiento para imprimir bonito
                
                cout<<"\nLa posicion respecto al punto de equilibrio es "<<posicion<<" m."<<endl;
                cout<<"|";
                for (int i = 0; i<=rescale; i++) {
                    cout<<"/";
                }
                cout<<"O"<<endl;
            }
        };
        
        void alturaCaidaLibre(double g, double v) {
            double h = v*v/(2*g);
            double t = sqrt(2*h/g);
            
            cout<<"\nEl objeto cayo de "<<h<<" m de altura"<<endl;
            cout<<"El objeto tardo "<<t<<" segundos en caer"<<endl;
        };
};

int main()
{
    ejercicios ej;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"   Este programa te ayuda a resolver \nel ejercicio de fisica que selecciones c:\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"<<endl;
    
    int r = 0;
    cout<<"Selecciona el ejercicio que desees:"<<endl;
    cout<<"1: Calculo de distancia recorrida en el tiempo"<<endl;
    cout<<"2: Calculadora de lanzamiento horizontal"<<endl;
    cout<<"3: Calculadora de energia cinetica"<<endl;
    cout<<"4: Simulacion de movimiento de un resorte"<<endl;
    cout<<"5: Calculadora de caida libre"<<endl;
    cout<<"\nR: ";
    cin>>r;
    
    double t, v, g, x0, k, m;
    switch(r) {
        case 1:
            cout<<"Ingresa el tiempo de caida (s): "<<endl;
            cin>>t;
            cout<<"Ingresa la aceleracion de gravedad (m/s^2): "<<endl;
            cin>>g;
            
            ej.distanciaCaidaLibre(t, g);
            break;
        case 2:
            cout<<"Ingresa la velocidad horizontal inicial del objeto (m/s): "<<endl;
            cin>>v;
            cout<<"Ingresa el tiempo de vuelo (s): "<<endl;
            cin>>t;
            
            ej.distanciaHorizontal(t, v);
            break;
        case 3:
            cout<<"Ingresa la masa del objeto (kg): "<<endl;
            cin>>m;
            cout<<"Ingresa la velocidad del objeto (m/s): "<<endl;
            cin>>v;
            
            ej.energiaCinetica(m, v);
            break;
        case 4:
            cout<<"Ingrese la constante de resorte (N/m): "<<endl;
            cin>>k;
            cout<<"Ingrese el desplazamiento inicial del objeto (m): "<<endl;
            cin>>x0;
            cout<<"Ingrese la masa del objeto (kg): "<<endl;
            cin>>m;
            
            ej.resorte(k, m, x0);
            break;
        case 5:
            cout<<"Ingrese la velocidad final del objeto (m/s): "<<endl;
            cin>>v;
            cout<<"Ingrese la aceleracion de gravedad (m/s^2): "<<endl;
            cin>>g;
            
            ej.alturaCaidaLibre(g, v);
            break;
        default:
            cout<<"No seleccionaste una opcion valida >:l";
    }
    return 0;
}