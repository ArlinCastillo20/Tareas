#include <iostream>
using namespace std;

// Definición del enum para las calificaciones
enum Grade { A, B, C, D, F };

// Función para convertir una calificación numérica en un enum Grade
Grade getGradeFromScore(int score) {
    if (score >= 90)
        return A;
    else if (score >= 80)
        return B;
    else if (score >= 70)
        return C;
    else if (score >= 60)
        return D;
    else
        return F;
}

// Función para convertir un enum Grade a una letra
char gradeToLetter(Grade grade) {
    switch (grade) {
        case A: return 'A';
        case B: return 'B';
        case C: return 'C';
        case D: return 'D';
        case F: return 'F';
        default: return 'F';
    }
}

int main() {
    int score;
    cout << "Ingresa la calificación numérica: ";
    cin >> score;

    Grade grade = getGradeFromScore(score);
    cout << "La calificación en letra es: " << gradeToLetter(grade) << endl;

    return 0;
}
