#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <string.h>

#include <iostream>
#include <cmath>
#include <stack>
#include <cctype>
#include <algorithm>
#include <regex>
#include <vector>
#include <string>

using namespace std;



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pb11_clicked();
    void on_pb12_clicked();
    void on_pb13_clicked();
    void on_pb15_clicked();
    void on_pb16_clicked();

    void on_pb21_clicked();
    void on_pb22_clicked();
    void on_pb25_clicked();
    void on_pb26_clicked();

    void on_pb31_clicked();
    void on_pb32_clicked();
    void on_pb33_clicked();
    void on_pb34_clicked();
    void on_pb35_clicked();
    void on_pb36_clicked();

    void on_pb41_clicked();
    void on_pb42_clicked();
    void on_pb43_clicked();
    void on_pb44_clicked();
    void on_pb45_clicked();
    void on_pb46_clicked();

    void on_pb51_clicked();
    void on_pb52_clicked();
    void on_pb53_clicked();
    void on_pb54_clicked();
    void on_pb55_clicked();
    void on_pb56_clicked();

    void on_pb61_clicked();
    void on_pb62_clicked();
    void on_pb63_clicked();
    void on_pb64_clicked();
    void on_pb65_clicked();

    void on_pb71_clicked();
    void on_pb72_clicked();
    void on_pb73_clicked();
    void on_pb74_clicked();
    void on_pb75_clicked();

    void on_pb81_clicked();
    void on_pb82_clicked();
    void on_pb83_clicked();
    void on_pb84_clicked();
    void on_pb85_clicked();

    void on_pb91_clicked();
    void on_pb92_clicked();
    void on_pb93_clicked();
    void on_pb94_clicked();
    void on_pb95_clicked();

private:
    Ui::MainWindow *ui;
};

class Calculadora
{
    public:

        string calcularExpresion(string expresionInfija) { // realiza todo el procedimiento para evaluar el input del usuario

            expresionInfija = evaluarUnarias(expresionInfija);

            string expresionPosfija = infijaAPosfija(expresionInfija);

            double resultado = evaluarPosfija(expresionPosfija);

            return to_string(resultado);
        }
    private:

        double suma(double c1, double c2)
        {
            return c1+c2;
        }
        double multiplicacion(double c1, double c2)
        {
            return c1*c2;
        }
        double resta(double c1, double c2)
        {
            return c1-c2;
        }
        double division(double c1, double c2)
        {
            return c1/c2;
        }
        double factorial(double c1)
        {
            if(c1 == 0)
            {
                return 1;
            }
            else
            {
                return c1*factorial(c1-1);
            }

        }
        double tangente(double numero)
        {
            double d = (numero*3.1415)/180;
            double c = tan(d);
            return (c*180)/3.141592;
        }
        double coseno(double numero)
        {
            double d = (numero*3.1415)/180;
            double c = cos(d);
            return (c*180)/3.141592;
        }
        double seno(double numero)
        {

            double d = (numero*3.1415)/180;
            double c = sin(d);
            return (c*180)/3.141592;
        }
        double inv_tangente(double numero)
        {
            double d = (numero*3.1415)/180;
            double c = atan(d);
            return (c*180)/3.141592;

        }
        double inv_seno(double numero)
        {
            double d = (numero*3.1415)/180;
            double c = asin(d);
            return (c*180)/3.141592;

        }
        double inv_coseno(double numero)
        {
            double d = (numero*3.1415)/180;
            double c = acos(d);
            return (c*180)/3.141592;
        }

        double expo_cuadra(double c1)
        {
            return c1*c1;
        }
        double expo_3(double c1)
        {
            return c1*c1*c1;
        }
        double expo_n(double c1, double c2)
        {
            if(c2 == 0)
            {
                return 1;
            }
            else
            {
                double expo = 1;
                for(int i=1; c2>= i ; i++)
                {
                    expo *= c1;
                }
                return expo;
            }
        }
        double Raiz(double c1)
        {
            if(c1 == 0)
            {
                cout << "Error valor indeterminado";
            }
            else if(c1 > 0)
            {
                return sqrt(c1);
            }
            else if(c1 < 0)
            {
                cout << endl << "Error, numero erroneo";
            }
        }
        double N_inverso(double c1)
        {
            if(c1 == 0)
            {
                cout << "Error, No se puede realizar esta operacion.";
            }
            else
            {
                return 1/c1;
            }
        }

        bool esOperador(char c) { // revisa si el caracter es un operador
            return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
        }

        int precedencia(char operador) { // asigna el valor jerarquico al operador leido
            if (operador == '^')
                return 3;
            else if (operador == '*' || operador == '/')
                return 2;
            else if (operador == '+' || operador == '-')
                return 1;
            else
                return 0;  // Para paréntesis
        }

        string infijaAPosfija(const string& expresionInfija) { // convierte el input de notacion infija (ingresada por el usuario) a posfija (facilita el calculo)
            stack<char> pila;
            string expresionPosfija = "";
            string expresionPosfijaFinal = "";
            size_t i = 0;

            int parenthesis = 0;

            while (i < expresionInfija.size()) {
                if (isdigit(expresionInfija[i]) || (expresionInfija[i] == '-' && isdigit(expresionInfija[i + 1]))) {
                    // Manejar números (positivos y negativos) de más de un dígito
                    int signo = 1;
                    if (expresionInfija[i] == '-') {
                        signo = -1;
                        i++;
                    }

                    double numero = 0;
                    while (isdigit(expresionInfija[i]) || expresionInfija[i] == '.') {
                        if (expresionInfija[i] == '.') {
                            i++;
                            double factor = 0.1;
                            while (isdigit(expresionInfija[i])) {
                                numero += factor * (expresionInfija[i] - '0');
                                factor /= 10;
                                i++;
                            }
                        } else {
                            numero = numero * 10 + (expresionInfija[i] - '0');
                            i++;
                        }
                    }
                    numero *= signo;
                    expresionPosfija += to_string(numero);
                    expresionPosfija += ' ';  // Agregar espacio para separar números
                }

                if (i < expresionInfija.size() && (expresionInfija[i] == '(' || esOperador(expresionInfija[i]))) {
                    if (expresionInfija[i] == '(') {
                        parenthesis += 1;
                        pila.push(expresionInfija[i]);
                    } else {
                        while (!pila.empty() && pila.top() != '(' && precedencia(expresionInfija[i]) <= precedencia(pila.top())) {
                            expresionPosfija += pila.top();
                            expresionPosfija += ' ';  // Agregar espacio para separar operadores
                            pila.pop();
                        }
                        pila.push(expresionInfija[i]);
                    }
                    i++;
                } else if (i < expresionInfija.size() && expresionInfija[i] == ')') {

                    parenthesis += -1;

                    if (parenthesis == 0) {
                        while (!pila.empty() && pila.top() != '(') {
                            expresionPosfija += pila.top();
                            expresionPosfija += ' ';  // Agregar espacio para separar operadores
                            pila.pop();
                        }

                        pila.pop(); // Eliminar '(' de la pila
                    }
                    i++;
                } else {
                    i++;  // Ignorar espacios y otros caracteres no relevantes
                }
            }

            while (!pila.empty()) {
                expresionPosfija += pila.top();
                expresionPosfija += ' ';  // Agregar espacio para separar operadores
                pila.pop();
            }

            for (char c : expresionPosfija) {
                if (c != ')') {
                    expresionPosfijaFinal += c;
                }
            }

            return expresionPosfijaFinal;
        }

        double evaluarPosfija(const string& expresionPosfija) { // evalua el string posfijo para devolver el resultado numerico
            stack<double> pila;
            size_t i = 0;

            while (i < expresionPosfija.size()) {
                if (isdigit(expresionPosfija[i]) || (expresionPosfija[i] == '-' && isdigit(expresionPosfija[i + 1]))) {
                    // Manejar números (positivos y negativos) de más de un dígito
                    int signo = 1;
                    if (expresionPosfija[i] == '-') {
                        signo = -1;
                        i++;
                    }

                    double numero = 0;
                    while (isdigit(expresionPosfija[i]) || expresionPosfija[i] == '.') {
                        if (expresionPosfija[i] == '.') {
                            i++;
                            double factor = 0.1;
                            while (isdigit(expresionPosfija[i])) {
                                numero += factor * (expresionPosfija[i] - '0');
                                factor /= 10;
                                i++;
                            }
                        } else {
                            numero = numero * 10 + (expresionPosfija[i] - '0');
                            i++;
                        }
                    }
                    numero *= signo;
                    pila.push(numero);
                } else if (esOperador(expresionPosfija[i])) {
                    double operand2 = pila.top();
                    pila.pop();
                    double operand1 = pila.top();
                    pila.pop();

                    switch (expresionPosfija[i]) {
                    case '+':
                        pila.push(suma(operand1, operand2));
                        break;
                    case '-':
                        pila.push(resta(operand1, operand2));
                        break;
                    case '*':
                        pila.push(multiplicacion(operand1, operand2));
                        break;
                    case '/':
                        pila.push(division(operand1, operand2));
                        break;
                    case '^':
                        pila.push(pow(operand1, operand2));
                        break;
                    }
                    i++;
                } else {
                    i++;  // Ignorar espacios
                }
            }

            return pila.top();
        }

        char codeFunction(string function) { // codifica el string de las funciones (sin, cos, exp, log, etc.) con un caracter unico
            if (function == "sin")
                return 's';
            else if (function == "cos")
                return 'c';
            else if (function == "tan")
                return 'd';
            else if (function == "asin")
                return 'f';
            else if (function == "acos")
                return 'g';
            else if (function == "atan")
                return 'h';
            else if (function == "log")
                return 'j';
            else if (function == "exp")
                return 'k';
            else if (function == "|") // Raiz Cuadrada
                return 'l';
        }

        string performOperation(string expression) { // evalua las expresiones unarias (sin, cos, exp, log, etc.)
            if (isalpha(expression[0])) { // checks if first character is a letter
                char func = codeFunction(expression.substr(0,3)); // saves first three characters (the function name)
                string argument_str = expression.substr(3); // saves the argument of the function
                int par = 0; // number of parentheses

                for (char c : argument_str) { // check if every "(" has a paired ")"
                    if (c == '(')
                        par += 1;
                    else if (c == ')')
                        par -= 1;
                }
                if (par > 0) { // add missing ")"
                    while (par > 0) {
                        argument_str += ')';
                        par -= 1;
                    }
                }

                argument_str = infijaAPosfija(argument_str);
                double argument_result = evaluarPosfija(argument_str);

                switch (func) {
                case 's':
                    return to_string(seno(argument_result));
                case 'c':
                    return to_string(coseno(argument_result));
                case 'd':
                    return to_string(tangente(argument_result));
                case 'f':
                    return to_string(inv_seno(argument_result));
                case 'g':
                    return to_string(inv_coseno(argument_result));
                case 'h':
                    return to_string(inv_tangente(argument_result));
                case 'j':
                    return to_string(log(argument_result));
                case 'k':
                    return to_string(expo_cuadra(argument_result));
                case 'l':
                    return to_string(Raiz(argument_result));
                }
            }
            else {
                string argument_str = infijaAPosfija(expression.substr(0, expression.length()-1));
                double argument_result = evaluarPosfija(argument_str);
                return to_string(factorial(argument_result));
            }
        }

        string evaluarUnarias(string input) { // realiza todo el procedimiento para evaluar las funciones unarias y sustituir su valor numerico en el input
            regex pattern("[a-z]{3}\\(.*?\\)|\\(.*?(\\)\\!)|[0-9]{1,}\\!");
            vector<string> matches;
            vector<string> substrings;

            for (sregex_iterator i = sregex_iterator(input.begin(), input.end(), pattern); i != sregex_iterator(); ++i) {
                smatch match = *i;

                matches.push_back(match.str());
                substrings.push_back(match.prefix().str());
            }

            int matches_length = matches.size();

            for (int i=0; i<matches_length; i++) {
                size_t pos = input.find(matches[i]);
                if (pos != string::npos) {
                    string old = matches[i];
                    string newstr = performOperation(matches[i]);
                    input.replace(pos, matches[i].length(), performOperation(matches[i]));
                }
            }

            return input;
        }
};

#endif // MAINWINDOW_H
