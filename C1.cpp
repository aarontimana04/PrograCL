// Librerias
// las librerias son un conjunto de funciones predefinidas
#include <iostream>

using namespace std;
// sirve para no escribir std:: antes de cada funcion

// VARIABLES
// guarda informacion de cualquier tipo de dato

// CONDICIONALES Y REGLAS DE CONTROL
// IF -> si se cumple la condicion, se ejecuta el bloque de codigo
// ELSE -> si no se cumple la condicion, se ejecuta el bloque de codigo
// ELSE IF -> si se cumple la condicion, se ejecuta el bloque de codigo, si

int main(){
    //10;
    //int num1 = 11; // numeros enteros
    //double num2 = 10.456789; // numeros con decimales grandes
    //bool b1 = true; // -> 1 // booleanos
    //bool b2 = false; // -> 0
    //bool b3 = 1; // true
    //string x = "Hola mundo"; // cadenas de texto

    //cout<<"Hola, este es mi primer programa en C++"<<endl;

    int persona1 = 20;
    int persona2 = 25;
    if(persona1>persona2){
        cout<<"La persona 1 es mayor que la persona 2"<<endl;
    } else if (persona1==persona2){
        cout<<"La persona 1 es igual a la persona 2"<<endl;
    } else {
        cout<<"La persona 2 es mayor que la persona 1"<<endl;
    }


    return 0;
}