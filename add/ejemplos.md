Ejemplos:
============


`Primero veamos la clase y logica para la clase Mouse(Raton)`
```cpp
/*Fichero mouse.h*/
class Mouse
{
public:
    Mouse();
    ~Mouse();
    float moverPuntero(float x, float y);/*establece las nuevas coordenadas del puntero*/
    float coordenadaX();
    float coordenadaY();
private:
    float posicionX;
    float posicionY;
};
/*fichero mouse.cpp  logica*/
Mouse::~Mouse(){}
/*establece los valores iniciales de las coordenadas en el constuctor*/
Mouse::Mouse(){
    posicionX =0;
    posicionY =0;
}
float Mouse::moverPuntero(float x, float y){
    posicionX = x;
    posicionY = y;
}
float Mouse::coordenadaX(){
    return posicionX;
}
float Mouse::coordenadaY(){
    return posicionY;
}
```
Ahora veamos a la clase Ordenador.
```cpp
/*Fichero ordenador.h*/
#include mouse.h
class Ordenador
{
public:
    Ordenador();
    ~Ordenador();
    Mouse raton; /* raton es un atributo de la clase ordenador
    al cual hemos llamado 'raton' de tipo 'Mouse' */
private:
    string nombreUsuario; 
    float cpu; /* estos atributos no son de importancia para la ejemplificacion*/
};
//Ficheros ordenador.cpp   logica
Ordenador::Ordenador(){}
Ordenador::~Ordenador(){}
```
Y para utilizar todo esto nos haría falta la vista, que es tan simple como esto:
```cpp
//vista
#include <iostream>
int main()
{
    Ordenador desk;
    desk.raton.moverPuntero(5.4,6.8);
    cout << "Las coordenadas son:" << desk.raton.coordenadaX() <<","<<desk.raton.coordenadaY();
    return 0;
}
```
* Lo primero que debemos tener en cuenta es que al utilizar la clase `Mouse` en la declaración de la clase `Ordenador` tenemos que añadir el fichero de cabeceras **"Mouse.h"** en el fichero cabeceras de **"Ordenador.h"**
* Por lo demás, la representación de la relación de agregación se hace introduciendo la clase  -agregada- un atributo en la clase -agregadora-