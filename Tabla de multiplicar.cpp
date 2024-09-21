#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingresa un número para generar su tabla de multiplicar: ";
    cin >> numero;

    // Generar la tabla de multiplicar
    cout << "Tabla de multiplicar de " << numero << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}

