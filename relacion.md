#####Relación entre clases
En esta actividad veremos cómo distintas clases pueden comunicarse entre sí y colaborar por medio del paso de mensajes.

En cualquier caso, nunca una clase podrá acceder a un atributo que sea privado en otra, independientemente de cómo éstas estén relacionadas.

Incidiendo en la idea de ocultación de información, el programador de una clase debe, por lo general, declarar los atributos (o estados de la misma) como privados y hacer que sean métodos los que accedan a esa información. De esta forma facilitará que si se modifica la implimentación de la misma, los usuarios ( ya sea el programa principal u otras clases) no perciban ni sufran las consecuencias de estos cambios.

#####Objetivos
* Observar que una relación entre clases nos permita agrupar clases con una serie de características ( atributos y metodos ) comunes nos va a permitir reutilizar el código de nuestros programas y simplificar el mantenimiento del mismo.
* Comprender la importancia que tiene el tema para nuestro desarrollo y crecimiento  en la resolución de problemas que implican el uso exclusivo de las relaciones entre clases