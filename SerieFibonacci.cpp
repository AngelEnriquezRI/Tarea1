//Declaración de librería
#include <iostream>

using namespace std;

const string INFO = "Este programa imprime la sucesion de fibonacci desde \
1 hasta N\n";

//Función principal
int main(){

    //Declaración de variables
    unsigned long long aux = 1, fib = 0, lim, init;

    //Entrada y lectura de datos
    cout << INFO << endl;
    cout << "Ingrese un numero para la sucesion de fibonacci: ";
    cin >> lim;

    //Condicional de límite
    if(lim > 0) {
        //Ciclo para acomodar los numeros de la serie Fibonacci
        for(init = 1; init <= lim; init++) {
            cout << "[" << fib << "] ";
            aux += fib; /* lo mismo que aux = aux + fib; */
            fib = aux - fib;
        }
    } else {
        cout << "El numero debe ser mayor a cero!!" << endl;
    }
    
    cout << "\n";
    return 0;
}