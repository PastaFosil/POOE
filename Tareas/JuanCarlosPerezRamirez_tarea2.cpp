//Juan Carlos Perez Ramirez

#include <iostream>
#include <cmath>

using namespace std;

class Rebote {
    public: 
        double altura, coeficiente_restitucion;
        
        void evolucionSistema() {
            cout<<"Altura en..."<<endl;
            int i = 0;
            do {
                cout<<"Rebote "<<i<<": "<<altura<<" m"<<endl;
                altura = alturaTrasRebote();
                i++;
            } while (altura>0.001);
            
            cout<<"\nNo puedo distinguir mas rebotes o.O"<<endl;
        };
    private:
        double alturaTrasRebote() {
            return altura*coeficiente_restitucion;
        };
};

int main()
{
    Rebote ejemplo;
    
    cout<<"Ingrese altura inicial de la pelota (m): ";
    cin>>ejemplo.altura;
    
    if (ejemplo.altura<0.0) {
        cout<<"\n\nNo se ha ingresado una altura inicial valida >:!"<<endl;
        
        return -1;
    }
    
    cout<<"Ingrese coeficiente de restitucion de la pelota: ";
    cin>>ejemplo.coeficiente_restitucion;
    
    if (ejemplo.coeficiente_restitucion < 0.0 || ejemplo.coeficiente_restitucion > 1.0) {
        cout<<"\n\nNo se ha ingresado un coeficiente de restitucion valido >:!"<<endl;
        
        return -1;
    } else if (ejemplo.coeficiente_restitucion==1.0) {
        cout<<"\n\nLa pelota rebotara a la misma altura indefinidamente O.O"<<endl;
        
        return 1;
    }
    cout<<"\n"<<endl;
    cout<<"Altura inicial: "<<ejemplo.altura<<" m"<<endl;
    cout<<"Coeficiente de restitucion: "<<ejemplo.coeficiente_restitucion<<endl;
    
    ejemplo.evolucionSistema();
    
    return 0;
}
