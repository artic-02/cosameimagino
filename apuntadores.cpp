#include<iostream>

using namespace std;
void elevarCuadrado(int &a); //prototipado de una funcion que recibe una direccion de memoria

int main(){
    //Trabajar con apuntadores
    int a=5;
    int *b; //b es una variable apuntada cuyo valor es una direccion de memoria
    b = &a; //el operador "&" antes de una variable le dice a C++ nos referimos a la direccion de memoria de la variable y no su valor
    //En este caso se le asigna a b
    cout<<"Direccion de a: "<<&a<<endl; //el output es la direccion en memoria de a
    cout<<"Valor de a: "<<a<<endl; //este es su valor
    cout<<"b es igual a "<<b<<endl; // el output es una direccion de memoria, en este caso, la misma de a
    //Para variables apuntadas, se usa el operador "*" para decirle a c++ que nos referimos al valor en esa direccion de memoria
    cout<<"Valor de b: "<<*b<<endl; // su valor es el mismo valor de a ya que apunta a la misma direccion de memoria
    
    *b = 100; //con esto manipulamos el valor de la direccion de memoria donde apunta b
    cout<<"Valor de a afectado por b: "<<a<<endl; 
    //A pesar de que la asignacion no se realizo con a, su valor se vio afectado debido a que el trabajo se realizo en la direccion de memoria

   
    //Tambien es posible manipular una variable con un metodo void usando apuntadores
    //Para manipular "a" con un metodo void podemos utilizar una funcion que recibe la direccion de memoria de a
    cout<<"----- Funcion elevarCuadrado -----"<<endl;
    elevarCuadrado(a);

    cout<<"Nuevo valor de a: "<<a<<endl; //El valor de a fue afectado ya que el trabajo fue realizado en la direccion de memoria de a
    cout<<"Direccion de a: "<<&a<<endl; //La direccion de memoria es la misma que antes

    return 0;
}

void elevarCuadrado(int &a){ //al usar "&" en los parametros de la funcion, C++ espera una direccion de memoria, no una "variable"
    a = a * a; //El trabajo se realiza de la direccion de memoria dada
    cout<<"Trabajo realizado"<<endl;
}