#include <iostream>

#include <curses.h>
#include <stdlib.h>
#include "../bl/Valores.h"
#include "../bl/TablaHash.h"
#include "../tl/Gestor.h"
#include "utilitario/Validar.h"

using namespace std;
void menu();
void procesarMenu(int &, bool &);
void addValores();
void buscarValores();
int ingresarNum(string);
void nPrimoMenorQue();
Gestor gestor;
Validar validar;
int hashing(long);

int main() {
    menu();
    return 0;
}
void menu() {
    bool salir;
    string valor;
    int opcion = 0;
    do {
        cout << "\nMenú principal\n\nElija una opción\n" <<
             "01 Agregar elemento\n" <<
             "02 Buscar elemento\n" <<
             "03 Número primo menor que ...\n" <<
             "04 Salir\n";
        cin >> valor;
        opcion = validar.ingresarInt(valor);
        procesarMenu(opcion, salir);
    } while (!salir);
}
void procesarMenu(int & pOpcion, bool & salir) {
    switch (pOpcion) {
        case 1:
            addValores();
            break;
        case 2:
            buscarValores();
            break;
        case 3:
            nPrimoMenorQue();
            break;
        case 4:
            salir = true;
            break;
        default:
            cout << "Opción inválida\n";
    }
}
int ingresarNum(string msg){
    int num;
    string valor;
    do {
        cout << msg << endl;
        cin >> valor;
        num = validar.ingresarInt(valor);
        if (num == -1){
            cout << "El valor ingresado es incorrecto\nVuelva a intentarlo\n";
        }
    } while (num == -1);
    return num;
}
void addValores(){
    string msg = "Ingrese el número que desea insertar\n";
    gestor.addValores(ingresarNum(msg));
    cout << "El valor se registró correctamente\n";
}

void buscarValores(){
    string msg = "Ingrese el número que desea buscar\n";
    cout << gestor.optenerValor(ingresarNum(msg));
}
void nPrimoMenorQue(){
    int valorRevision = ingresarNum("Ingrese el tamaño del arreglo");
    if (valorRevision < 1){
        cout << "No puede ingresar valores menores que 1\n";
    } else {
        int valorPrimo = validar.nPrimoMenorQue(valorRevision);
        cout << "El valor a usar en la función hashign es " << valorPrimo << endl;
    }
}