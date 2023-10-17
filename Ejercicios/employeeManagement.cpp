/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Empleado {
    private:
        string nombre;
        string direccion;
    public:
        void setNombre(string s) {
            nombre = s;
        }
        
        void setDireccion(string s) {
            direccion = s;
        }
        
        string getNombre() {
            return nombre;
        }
        
        string getDireccion() {
            return direccion;
        }
        
        void informacion() {
            cout << "Nombre: " << nombre << endl;
            cout << "Dir: " << direccion << endl;
        }
        
        void calcularSalario(double salario) {
            cout << "El salario es " << salario;
        }
    
};

class empleadoTiempoCompleto: public Empleado{
    public:
        double salarioAnual;
    empleadoTiempoCompleto(double n) {
        salarioAnual = n;
    };
    
    void calcularSalario() {
        cout << "El salario es $" << salarioAnual/12 << endl;
    };
};

class empleadoTiempoParcial: public Empleado{
    public:
        double salarioHora;
        double horas;
    empleadoTiempoParcial(double n, int h) {
        salarioHora = n;
        horas = h;
    };
    
    void calcularSalario() {
        cout << "El salario es $" << salarioHora*horas << endl;
    };
};

class empleadoContrato: public Empleado{
    public:
        double salario;
    empleadoContrato(double n) {
        salario = n;
    };
    
    void calcularSalario() {
        cout << "El salario es $" << salario << endl;
    };
};

int main()
{
    //Empleado a;
    //a.setDireccion("Calle M");
    //a.setNombre("Ana");
    //a.informacion();
    //a.calcularSalario(10000);/
    
    empleadoTiempoCompleto e1(150000);
    e1.setNombre("Juan");
    e1.setDireccion("Lomas del sol 203");
    e1.informacion();
    e1.calcularSalario();
    
    empleadoTiempoParcial e2(1000, 40);
    e2.setNombre("Carlos");
    e2.setDireccion("Lomas del sol 204");
    e2.informacion();
    e2.calcularSalario();
    
    empleadoContrato e3(15000);
    e3.setNombre("Roberto");
    e3.setDireccion("Lomas del salar 203");
    e3.informacion();
    e3.calcularSalario();
    
    return 0;
}
