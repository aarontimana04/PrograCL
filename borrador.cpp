    // FOR
    cout<<endl;
    // IMPRIMIR LA TABLA DE MULTIPLICAR DE UN NUMERO DADO POR EL USUARIO

    int valor = 7;
    int veces = 10;

    for (int i = 0; i < veces; i++){
        cout<<valor<<" x "<<i<<" = "<<valor*i<<endl;
    }

    // IMPRIMIR LA SUMA DE LOS N PRIMEROS NUMEROS ENTEROS, SIENDO N UN NUMERO DADO POR EL USUARIO

    int entero = 100;
    int contador = 0;
    for (int i = 1; i <= entero; i++)
    {
        contador = contador+i;
    }

    cout<<"El resultado es: "<<contador<<endl;
    
    // Del 1 al N: si es múltiplo de 3 → "Fizz", de 5 → "Buzz", de ambos → "FizzBuzz", sino el número.

    int ingreso = 15;

    for (int i = 1; i <= ingreso; i++)
    {
        if(i%3==0 && i%5==0){
            cout<<"FizzBuzz"<<endl;
            break;
        } else if(i%3==0){
            cout<<"Fizz"<<endl;
        } else if(i%5==0){
            cout<<"Buzz"<<endl;
        } else {
            cout<<i<<endl;
        }
    }
    
    // WHILE
    // IMPRIMIR LOS 20 PRIMER0S NUMEROS

    int iter = 20;
    int i = 1;
    while(i<=iter){
        cout<<i<<" "<<endl;
        i++;
    }

    // HALLAR LA SUMA DE LOS PRIMERO N MULTIPLOS DE 5, SIENDO N UN NUMERO DADO POR EL USUARIO

    int valorusuario = 20;
    int i2=0;
    int suma = 0;
    while(i2<=20){
        if(i2%5==0){
            suma = suma + i2;
        }
        i2++;
    }

    cout<<"Suma total es: "<<suma<<endl;
    // FACTORIAL DE UN NUMERO N

    int n = 5;
    int contador2 = 1;
    int i3 = 1;
    while(i3<=5){
        contador2 = contador2*i3;
        i3++;
    }

    cout<<contador2;
