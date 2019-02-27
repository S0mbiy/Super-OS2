## Objetivo
Modificar el programa sh.c para ejecutar al comando anterior

## Herraminetas
git
make
gcc

## Conceptos
1) Como se crean nuevos procesos
+ Un programa padre (sh.c) ejecuta la llamada a sistema fork
+ La llamada a sistema fork clona al proceso padre
+ El proceso hijo manda a llamar a exec para ejecutar otro codigo

## Que aprendi?
Para usar un for en c no se puede declarar el int en el for y tambien se puede usar la condicion del un while dentro del for y asi no llevamos el contador por fuera pero la ultima asignacion se tiene que hacer por fuera ya que la ultima condicion ya no cumple y no mete el caracter de nulo.
Aprendimos como el sistema operativo manda a llamar a una funcion
Aprendimos que cd es un comando especial porque no genera un clon como los demas si no que cambia la direccion en la que se ejecuta el mismo. 

## Url del commit:
https://github.com/S0mbiy/Super-OS2/commit/2e07b3a9ee9771ee325f00f12d9878d161f8d552

## Como se relaciona con los conceptos anteriores?
Aqui se hacen uso de dos llamadas a sistema, fork y exec y tienen que ser llamadas a sistema porque yo programa no puedo 
acceder a memoria para el fork ni a disko duro para el exec.
