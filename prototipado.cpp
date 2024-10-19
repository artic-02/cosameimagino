#include <iostream>
using namespace std;
/*El prototipado de funciones permite programar las funciones despues del main
lo que es una buena practica y vuelve nuestro codigo mas legible.

Primero es necesario declarar nuestras funciones antes del main de la siguiente forma*/

void imprimirNombre(string nombre); //funcion void que recibe un string de parametro
int sumarNumeros (int a, int b); //funcion int, recibe 2 enteros y regresa un valor de tipo entero




int main(){
    int a=2,b=3;
    string n="elmaje";
    sumarNumeros(a,b); //C++ realiza el trabajo de esta funcion, sin embargo no la imprime ya que no le estamos diciendo que la imprima
    imprimirNombre(n);
    cout<<sumarNumeros(a,b)<<endl; //Podemos llamar a una funcion dentro de un "cout" si esta devuelve algun tipo de valor (osea, si no es void, se puede concatenar en el cout)
    //esto imprimira cualquier valor que este regresando esa funcion
    return 412;
}

//Para poder usar nuestras funciones prototipadas es necesario programarlas despues del main

void imprimirNombre(string a){ // no importa que el nombre de la variable sea distinto, tan solo es requerido que su "firma" sea la misma
    cout<<a<<endl;
}

int sumarNumeros(int a, int b){
    return a+b; 
}