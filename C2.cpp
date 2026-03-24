// LIBRERIAS
#include <iostream>

// NAMESPACE
using namespace std;


// FUNCIONES
void calcularArea1(int lado){
    cout<<"El area es: "<<lado*lado<<endl;
}

int calcularArea2(int lado){
    return lado*lado;
}

// FUNCION PRINCIPAL
int main(){
    int ladoCuadrado = 5;
    calcularArea1(ladoCuadrado);

    int ladoCuadrado2 = 10;
    int area;
    area = calcularArea2(ladoCuadrado2);
    cout<<"El area es: "<<area<<endl;

    // PERIMETRO -> ANCHO Y LARGO -> 2*(ancho+largo)

    return 0;
};