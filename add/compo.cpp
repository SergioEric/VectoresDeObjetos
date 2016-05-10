#include <string>
#include <iostream>
using namespace std;

/*Fichero page.h*/
class Page
{
	public:
	Page();
	~Page();
	void setContenido(string entrada);
	void setNumero(int numero);
	string getContenido();
	int getNumero();
	private:
	string contenido;
	int numero;
};
/*Fichero page.cpp*/
Page::Page(){}
Page::~Page(){}
void Page::setContenido(string entrada){
	contenido = entrada;
}
void Page::setNumero(int num){
	numero = num;
}
string Page::getContenido(){
	return contenido;
}
int Page::getNumero(){
	return numero;
}
/*Fichero book.h*/
class Book
{
public:
	Book();
	~Book();
	Page paginas;
	/*.
		todos los metodos para establecer(set) y obtener(get) los atributos necesarios
	*/
private:
	string titulo;
	string autor;
	int aniopublic;
};

int main()
{
	Page pag;
	pag.setNumero(2);
	pag.setContenido("Once upon a time");
	cout << "Numero : " << pag.getNumero() <<endl;
	cout << "contenido : " << pag.getContenido() ;
	return 0;
}