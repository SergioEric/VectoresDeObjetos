#include <string>
#include <iostream>
using namespace std;
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
/*Fichero ordenador.h*/
//#include mouse.h
class Ordenador
{
public:
	Ordenador();
	~Ordenador();
	Mouse raton; // raton es un atributo de la clase ordenador al cual hemos llamado 'raton' de tipo 'Mouse'
private:
	string nombreUsuario;
	float cpu;
};
//Ficheros ordenador.cpp   logica
Ordenador::Ordenador(){}
Ordenador::~Ordenador(){}

int main()
{
    Ordenador desk;
    desk.raton.moverPuntero(5.4,6.8);
    cout << "Las coordenadas son:" << desk.raton.coordenadaX() <<","<<desk.raton.coordenadaY();
    return 0;
}
