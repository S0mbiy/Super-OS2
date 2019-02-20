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


## Url del commit:

## Como se relaciona con los conceptos anteriores?
Aqui se hacen uso de dos llamadas a sistema, fork y exec y tienen que ser llamadas a sistema porque yo programa no puedo 
acceder a memoria para el fork ni a disko duro para el exec.
