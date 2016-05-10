#include <iostream>
#include <array>
using namespace std;
// -- Constantes -------
const unsigned NELMS = 5;
// -- Tipos ------------
typedef array<int, NELMS> Vector;
// -- Subalgoritmos ----
void leer (Vector& v){
	for (unsigned i = 0; i < v.size(); ++i) {
		cin >> v[i];
	}
}
int sumar (const Vector& v)
{
	int suma = 0;
	for (unsigned i = 0; i < v.size(); ++i) {
		suma += v[i];
	}
	return suma;
}
// -- Principal --------
int main ()
{
	Vector v1, v2;
	leer(v1);
	leer(v2);
	if (sumar(v1) == sumar(v2)) {
		cout << "Misma suma" << endl;
	}
}