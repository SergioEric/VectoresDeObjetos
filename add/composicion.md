**Ejemplo 1:** Podemos considerar de composición como la relación que existe entre un libro y sus paginas:
![img](../assets/book.jpg)

* En primer lugar, la relación de composición se denota con un rombo negro(en diagramas UML)
* En segundo lugar, se ha añadido la etiqueta "0..*" a la flecha. Esto quiere decir que la relación tiene una multiplicidad entre 0 y cualquier número. La forma de entenderlo es que un objeto de la clase "Libro" puede contener cualquier número de objetos de la clase "Página".
* Finalmente, hemos etiquetado la relación con la palabra "contiene", que nos da una idea  de cómo se relacionan ambas clases.

######Veamos la implementación en c++:

```cpp
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

```
Ahora veamos la clase Book:
```cpp
/*Fichero book.h*/
class Book
{
public:
	Book();
	~Book();
	Page paginas; /* Objeto pagina que vive como atributo dentro de la
	clase Libro, fuera de ella no tiene valor o utilidad*/
	/*.
		todos los metodos para establecer(set) y obtener(get) los atributos necesarios
	*/
private:
	string titulo;
	string autor;
	int aniopublic;
};
```

Volviendo a la idea de por qué la relación es de composición ( o una agregación fuerte), los objetos de la clase "Libro", que les asigna un "autor", un "titulo"... Fuera de esta clase, un objeto de la clase "Página" no nos ofrecería una información de mucha utilidad.