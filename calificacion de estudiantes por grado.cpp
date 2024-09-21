#include <iostream>
using namespace std;

// Definici�n del enum para las calificaciones
enum Grade { A, B, C, D, F };

// Funci�n para convertir una calificaci�n num�rica en un enum Grade
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

// Funci�n para convertir un enum Grade a una letra
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
    cout << "Ingresa la calificaci�n num�rica: ";
    cin >> score;

    Grade grade = getGradeFromScore(score);
    cout << "La calificaci�n en letra es: " << gradeToLetter(grade) << endl;

    return 0;
}
