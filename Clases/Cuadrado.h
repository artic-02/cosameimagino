/*Al crear una clase en C++ es necesario hacer 2 cosas:
1.Crear un archivo .h (header) lo que le dice a C++ que es una clase
2.Una vez creado el archivo .h, definirla con un #define, este define lo metemos dentro de un bloque "#ifndef -> #endif"
Esto porque cuando estamos trabajando en un proyecto donde varias clases se llaman entre si, nos ayuda a no definir
la misma clase 2 veces y evitar conflictos a la hora de ejecutar nuestro codigo*/
#ifndef CUADRADO_H
#define CUADRADO_H

class Cuadrado{
    /*Una clase tiene 2 secciones
    private: Es para variables y funciones las cuales solo se podran manipular dentro de la misma clase
    normalmente se usa para establecer condiciones en nuestras variables y funciones/metodos, para que no las manipulen de formas
    indeseadas. EJ:
    Hacer un deposito negativo
    establecer un numero maximo de caracteres en un nombre de usuario
    etc...

    public: Es para variables y funciones las cuales se pueden manipular desde cualquier ambito, dentro y fuera
    de la clase, lo usamos cuando no es necesario mantener un control sobre los variables, aqui colocamos tambien las funciones/metodos
    que creemos para que un usuario interactue con variables "private"
    */
    private: 

    public:
        float a,b; //declaramos 2 variables float en el la seccion public
        
        Cuadrado(float a, float b){ //constructor: un constructor es un metodo sin tipo el cual se usa para asignar valores a las variables que se estan en la clase
            this->a = a; //Se coloca "this->" para hacer referencia a "esta" instancia en particular
            this->b = b;
        }
        
        Cuadrado(){ //Es posible tener multiples constructores dentro de la misma clase, siempre y cuando sean sus firmas distintas entre si
            this->a=2;
            this->b=2;
        }
    
        float area(){ //un metodo que calcula el area del cuadrado, el cual usa los valores de la instancia para el calculo
            return this->a * this->b; 
        }
    
};
#endif //CUADRADO_H