ASOCIACIÓN
==========

Diremos que dos o más clases tienen una relación de **asociación** cuando una de ellas tenga que requerir o utilizar alguno de los servicios (es decir, acceder a alguna de las propiedades o métodos) de las otras.

Como se puede observar, las relaciones de asociación son más débiles que las relaciones de agregación, en el sentido de que no requieren (aunque en ocasiones lo implementemos así) que creemos un objeto nuevo a partir de otros objetos, sino únicamente que los objetos interectúen entre sí.

Las relaciones de asociación crean enlaces entre objetos. Estos enlaces no tiene por qué ser permanentes (es más, en la mayoria de los casos, no lo serán). Los objetos deben tener entidad fuera de la relación (a diferencia de las relaciones de composición).

Un ejemplo clásico de relación de asociación es la relación "empresa - empleado". Podemos definir una clase "Empresa" y una clase "Empleado" que nos permitan representar esta relación:

| Empleado |											
| ------------- |		 				
| nombre : string |               					
|   /* metodos*/    |
 *un empleado trabaja en una empresa*

| Empresa |											
| ------------- |		 				
| NIT : string |                  					
|     /* metodos*/  |

```cpp
class Empleado {
	private:
	String nombre;
	Empresa * empresa; // objeto empresa - instancia de la clase Empresa
	public:
	...
};
```
En el ejemplo además vemos que esta relación se ha declarado de multiplicidad indefinida en ambos extremos, lo que quiere decir que un empleado puede trabajar en varias empresas ( casos de pluriempleo) y, por supuesto, que una empresa puede estar formada por más de un empleado.