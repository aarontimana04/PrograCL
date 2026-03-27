// LIBRERIAS
#include <iostream>
#include <string>

// NAMESPACE
using namespace std;

// FUNCIONES

void imprimirDivisiones(float valor){
    for(int i = 1; i<=valor; i++){
        cout<<valor<<" / "<<i<<" = "<<valor/i<<endl;
    }
}

void parimpar(int limite){
    for(int iter = 1; iter<=limite;iter++){
        if(iter%2==0){
            cout<<iter<<" es par"<<endl;
        }else{
            cout<<iter<<" es impar"<<endl;
        }
    }
}

// BUCLES: repeteciones de instrucciones
// FOR: se repite un bloque de codigo un numero determinado de veces 




// FUNCION PRINCIPAL
int main(){
    int valor;
    int limite;

    //cout<<"Ingrese un numero: ";
    //cin>>valor;
    //cout<<"Ingrese el limite: ";
    //cin>>limite;

    for(int i=1; i<=limite; i++){
        cout<<valor<<" x "<<i<<" = "<<valor*i<<endl;// 5x10=50
    }

    // valor = 3
    // limite = 2
    // ITER1 -> 3X1=3
    // ITER2 -> 3X2=6
    // ITER3 -> SALE DE BUCLE

    // INPUT -> 5
    // OUTPUT -> 1+2+3+4+5 = 15

    imprimirDivisiones(10);

    cout<<endl;

    parimpar(10);
    return 0;
}