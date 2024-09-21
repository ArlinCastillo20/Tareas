#include <iostrem>

// Función que verifica si un número es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // 0 y 1 no son primos
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false; // El número es divisible por otro número
        }
    }
    return true; // El número es primo
}

int main() {
    int numero;

    // Solicitar un número entero positivo al usuario
    cout << "Introduce un número entero positivo: ";
    cin >> numero;

    // Verificar si el número es primo y mostrar el resultado
    if (numero < 0) {
        cout << "Por favor, introduce un número entero positivo." << endl;
    } else {
        if (esPrimo(numero)) {
            cout << numero << " es un número primo." << endl;
        } else {
            cout << numero << " no es un número primo." << endl;
        }
    }

    return 0;
}



