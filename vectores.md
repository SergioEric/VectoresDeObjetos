Vectores de Objetos
====================

La función básica de un arreglo es almacenar en una variable más de un valor de un mismo tipo de dato, por ejemplo la siguiente declaración `int numero[8]` ; permite almacenar en la variable numero, 8 valores enteros.

En las clases el concepto de arreglos es el mismo, con la diferencia que ahora se alamcenarán objetos de una clase o de direfentes clases.

Los objetos se pueden estructurar como un *array*. Los objetos son variables y tiene las mismas capacidades y atributos que cualquier tipo de variables, por tanto es posible disponer objetos en un array.

```cpp
// fichero cuaderno.h
#include "iostream"
#include <windows.h>
#include  <string>
using namespace std;
class Cuaderno
{
public:
	Cuaderno();
	~Cuaderno();
	void nueva_nota(int i, string memo, string tags);
	void editar_nota(string new_memo);
	string buscar_notas();
private:
	string memo;
	string tags;
	int id;
};

//fichero cuaderno.cpp
Cuaderno::Cuaderno(){}
Cuaderno::~Cuaderno(){}
void Cuaderno::nueva_nota(int i, string _memo, string _tags){
	memo = _memo;
	tags= _tags;
	id = i;
}
void Cuaderno::editar_nota(string new_memo){
	memo = new_memo;
}
string Cuaderno::buscar_notas(){
	return memo;
}

// la vista
int main()
{	
	int num;
	int valor;
	cout << "Digite el numero de notas a apuntar en el cuaderno\n";
	cin >> num;
	Cuaderno Notas[num];
	system("cls");
	do
	{
		cout<<"1)Numero de notas"<<endl;
		cout<<"2)Ingresar Notas y Tags"<<endl;
		cout<<"3)Editar nota"<<endl;
		cout<<"4)Salir "<<endl;
		cin>>valor;
		system("cls");
		if (valor == 1)
		{
			cout << "===========================\n";
			for (int i = 0; i <num; ++i)
			{
				cout << Notas[i].buscar_notas()<< "\n";
			}
			cout << "===========================\n";
		}
		if (valor == 2)
		{
			system("cls");
			for (int i = 0; i < num; ++i)
			{
				string memo;
				cin.ignore(256,'\n');
				string tags;
				cout << "Digite el memo de la nota:" << i+1 << "\n"; 
				getline(cin,memo);
				cout << "Digite el tags de la nota: "  << i+1 << "\n"; 
				cin >>tags;
				Notas[i].nueva_nota(i,memo,tags);
			}
		}
		if (valor == 3)
		{
			int n;
			string new_memo;
			cout << "Editar Nota ? :\n";
			cin >> n;
			cout << "El nuevo memo aqui: \n";
			cin >>new_memo;
			Notas[n-1].editar_nota(new_memo);
			cout << "===========================\n";
			for (int i = 0; i < num; ++i)
			{
				cout << "NOTA: " << i+1 <<Notas[i].buscar_notas()<< "\n";
			}
			cout << "\n \n";
			cout << "===========================\n";
		}
	} while (valor !=4);
	return 0;
}
```