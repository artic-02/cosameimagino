//Clases
#include <iostream>
#include "Cuadrado.h" //Para poder usar una clase en nuestro main, es necesario importarla con un include y con el nombre del archivo entre comillas

using namespace std;

int main(){
    Cuadrado *c1 = new Cuadrado(5.44 , 3.22); // Para usar una clase es necesario crear una variable del tipo de la clase
    // el constructor es utilizado para asignar los valores dentro de la clase, en este caso, a es 5.44 y b es 3.22
    float areaC1 = c1->area(); //al llamar la funcion, se utilizan los valores asignados por el constructor para el calculo
    cout<<"Area de c1: "<<areaC1<<endl;
    
    // Ya que a y b son variables public se pueden manipular directamente

    c1->a = 4.44;
    c1->b = 9.99;
    //Nuevos valores asignados a ambas variables de la instancia c1

    areaC1 = c1->area();
    cout<<"Nueva area de c1: "<<areaC1<<endl;
    //El area es calculada con los nuevos valores de a y b
    return 0;
}