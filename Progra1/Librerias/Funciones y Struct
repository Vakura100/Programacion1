#include <iostream>

using namespace std;

float PedidaDeCalificaciones(float &calif1, float &calif2, float &calif3, float &calif4, float &calif5);
float CalculoDePromedio(float calif1, float calif2, float calif3, float calif4, float calif5);

int main() {
    float calificacion1, calificacion2, calificacion3, calificacion4, calificacion5;
    float promedio = 0;

    PedidaDeCalificaciones(calificacion1, calificacion2, calificacion3, calificacion4, calificacion5);
    promedio = CalculoDePromedio(calificacion1, calificacion2, calificacion3, calificacion4, calificacion5);

    cout << "Tu promedio es de: " << promedio << endl;
    if (promedio >= 9) {
        cout << "Alumno de excelencia" << endl;
    } else if (promedio >= 6) {
        cout << "Alumno Aprobado" << endl;
    } else {
        cout << "Alumno Reprobado" << endl;
    }

    return 0;
}

float PedidaDeCalificaciones(float &calif1, float &calif2, float &calif3, float &calif4, float &calif5) {
    cout << "Ingresa la primera calificación : ";
    cin >> calif1;
    cout << "Ingresa la segunda calificación : ";
    cin >> calif2;
    cout << "Ingresa la  tercera calificación : ";
    cin >> calif3;
    cout << "Ingresa la cuarta calificación : ";
    cin >> calif4;
    cout << "Ingresa la quinta calificación : ";
    cin >> calif5;

    return 0;
}

float CalculoDePromedio(float calif1, float calif2, float calif3, float calif4, float calif5) {
    return (calif1 + calif2 + calif3 + calif4 + calif5) / 5;
}
