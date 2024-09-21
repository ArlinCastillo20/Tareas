#include <iostrem>

// Funci�n que verifica si un n�mero es primo
bool esPrimo(int numero) {
    if (numero <= 1) {
        return false; // 0 y 1 no son primos
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false; // El n�mero es divisible por otro n�mero
        }
    }
    return true; // El n�mero es primo
}

int main() {
    int numero;

    // Solicitar un n�mero entero positivo al usuario
    cout << "Introduce un n�mero entero positivo: ";
    cin >> numero;

    // Verificar si el n�mero es primo y mostrar el resultado
    if (numero < 0) {
        cout << "Por favor, introduce un n�mero entero positivo." << endl;
    } else {
        if (esPrimo(numero)) {
            cout << numero << " es un n�mero primo." << endl;
        } else {
            cout << numero << " no es un n�mero primo." << endl;
        }
    }

    return 0;
}



