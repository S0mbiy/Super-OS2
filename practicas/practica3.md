# Objetivo
Modificar al programa init para que muestre un programa de bienvenida.

# Herramientas
gcc
make
git

# Conceptos
1) Proceso
+ Instancia de un programa
+ Tiene tres partes:
++ Stack: variables y las llamadas a funciones.
++ Heap: memoria dinámica (malloc o new)
++ Codigo

+ Se crea mediante dos llamadas a sistema:
++ fork: clona
++ exec: cambia el código

+ Tiene un estado:
++ Corriendo: ejecutandose
++ Durmiendo (listo): esperando su turno
++ Espera: esperando un recurso
++ Completado: termino
++ Zombie: termino pero sigue existiendo en memoria

2) Programa init

+ Es el programa encargado de inicialzar al SO para dejarlo listo para usarse
+ Es el unico proceso que crea el SO

# Que aprendi

# URL del commit
