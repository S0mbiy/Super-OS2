## Objetivo
Hacer un planificador de proceso basado en prioridades.
El proceso con mayor prioridad se ejecuta primero. 
Si hay dos o mas procesos con la misma prioridad se ejecuta el primero de la lista.

## Herramientas
gcc make git

## Conceptos
1) Proceso (va a ser pregunta)
Instancia de un programa

Tiene tres partes: ++ Stack: variables y las llamadas a funciones. ++ Heap: memoria dinámica (malloc o new) ++ Codigo

Se crea mediante dos llamadas a sistema: ++ fork: clona ++ exec: cambia el código

Tiene un estado: ++ Corriendo: ejecutandose ++ Durmiendo (listo): esperando su turno ++ Espera: esperando un recurso ++ Completado: termino ++ Zombie: termino pero sigue existiendo en memoria

2) Planificacion de procesos:
+ Es el mecnismo que el SO tiene para asignar el cpu a un proceso

4) Cambio de contexto:
+ Ocurre cuando el cpu deja de ejecutar un proceso para ejecutar otro.
+ Guardar el PC y la dirección del stack del proceso actual.
+ Restaurar el PC y la direccion del nuevo proceso.

## Que aprendi
Aprendi como se inicializa el proceso init y como este inicializan otros procesos como el sh. Tambien aprendi que es un proceso y de que se compone así como los estados de un proceso.

## URL del commit
https://github.com/S0mbiy/Super-OS2/commit/556c4cc6e885f1417110178799a1d2a9919c2e08
https://github.com/S0mbiy/Super-OS2/commit/52bc4b4ed2797f79af878e91aa96fc7b68cecc98

## Como se relaciona con los conceptos anteriores
Esto se relaciona con como maneja un systema operativo los procesos y conseguir mas recursos en un programa.
