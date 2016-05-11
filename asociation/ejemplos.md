Ejemplo de Asociación
===================
Veamos cómo se pueden implementar las relaciones de asociación, que, además, tienen asociada una multiplicidad distinta de cero en alguno de sus extremos. Implementamos el ejemplo en c++ donde la clase "Pelicula" y la clase "Actor" poseían una relación de asociación...

```cpp
class Actor
{
public:
    Actor();
    Actor(char [],int);
    ~Actor();
    char * getNombre();
    void setNombre(char []);
    int getNacimiento();
    void setNacimiento(int);
    // void mostrarActor();
private:
    char nombre[30];
    int nacimiento;
};
```
...lo anterior sería la clase *Actor* que posee dos atributos base, el nombre y el nacimiento del actor; además contiene los métodos accesores a estos atributos.
```cpp
//Fichero Actor.cpp
#include <cstring>

/*
establece el valor por defecto de los atributos en el constructor
*/
Actor::Actor(){
    strcpy(this->nombre, "");
    this->nacimiento = 0;
}
Actor::Actor(char nombre [],int nacimiento){
    strcpy(this->nombre, nombre);
    this->nacimiento = nacimiento;
}
Actor::~Actor(){}
char * Actor::getNombre(){
    return this->nombre; //devuleve el nombre del actor
}
void Actor::setNombre(char nombre []){
    strcpy(this->nombre, nombre); // establece el nombre del actor
}
int Actor::getNacimiento(){
    return this->nacimiento;//devuleve el numero de nacimiento del actor
}
void Actor::setNacimiento(int nacimiento){
    this->nacimiento = nacimiento;
}
```

```cpp

//Fichero Pelicula.h
/*
    En este fichero podemos observar cómo los actores que
    tienen asociados un objeto de la clase Pelicula se representan
    por medio de un "array" de objetos de la clase "Actor"
*/
//#include "Actor.h"
class Pelicula
{
public:
    Pelicula();
    Pelicula(char [], char [], int);
    ~Pelicula();
    char * getTitulo();
    void setTitulo(char []);
    char * getDirector();
    void setDirector(char []);
    int getDuracion();
    void setDuracion(int);
    char * mostrarActores(int);
    void introduceActor(Actor);
    int getNumeroActores();

private:
    char titulo[30];
    char director[30];
    int duracion;
    // Atributos que van a representar la relacion de asociacion
    Actor actores[15]; // asigno un maximo de 15 actores
    int numeroActores;
};
//Fichero pelicula.cpp

Pelicula::Pelicula(){
    strcpy(this->titulo,"");
    strcpy(this->director,"");
    this->duracion = 0;
    this->numeroActores =0;
}
Pelicula::~Pelicula(){}
char * Pelicula::getTitulo(){
    return this->titulo;
}
void Pelicula::setTitulo(char nuevo_titulo []){
    strcpy(this->titulo,nuevo_titulo);
}
char * Pelicula::getDirector(){
    return this->director;
}
void Pelicula::setDirector(char nuevo_director []){
    strcpy(this->director, nuevo_director);
}
int Pelicula::getDuracion(){
    return this->duracion;
}
void Pelicula::setDuracion(int nueva_duracion){
    this->duracion = nueva_duracion;
}
void Pelicula::introduceActor(Actor actor){
    if(this->numeroActores < 15)
        this->actores[this->numeroActores] = actor;
        this->numeroActores++;
}
int Pelicula::getNumeroActores(){
    return this->numeroActores;
}
char * Pelicula::mostrarActores(int id){
    return this->actores[id].getNombre();
}
/*
	en los anteriores métodos establecemos simplemente los get y set
	para cada atributo de la clase.
	Además el metodo "*introduceActor*" que va almacenando cada uno de
	los actores que le son pasados a éste método.
	Y el método "*mostrarActores*" que devuelve el nombre del actor
	mediante la relacion que se ha hecho en la clase(*Actor actores*) asi
	es cómo podemos acceder al metodo que está en la *clase Actor* que devuelve el nombre.
*/
```
Ahora veamos la implementacion en la vista main

```cpp
//Fichero con la vista main.cpp
#include <cstdlib>

int main()
{
    Pelicula war("Guerra_mmundial_Z", "Brad_Piti",120); //instacia de la clase Pelicula
    Actor pedro("Owen_Wilson", 1950);// nuestros objetos *actores*
    Actor jean("george_cluni", 1970);
    Actor gian("Matt_mumford", 1980);
    Actor sergio("Owen_Wilson", 1965);
    war.introduceActor(pedro);
    war.introduceActor(jean);
    war.introduceActor(gian);
    war.introduceActor(sergio);

    cout << "Nombre de la pelicula es:" << war.getTitulo()<< "\n";
    cout << "Tiene un aduracion de :" << war.getDuracion() << " minutos \n";
    cout << "En la war trabaja: \n";
    for (int i = 0; i < war.getNumeroActores() ; i++)
    {
        cout << war.mostrarActores(i);
    }
    return 0;
}
```
