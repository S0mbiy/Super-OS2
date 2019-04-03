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
When it starts it calls  

+ sys_exec -> -2146413648
+ sys_open -> -2146414416
+ sys_mknod -> -2146413968
+ sys_open -> -2146414416
+ sys_dup -> -2146415744
+ sys_dup -> -2146415744

And for each printed char it calls the system call

+ sys_write -> -2146415536

Each enter in the sh calls the following

+ sys_fork -> -2146413216
+ sys_wait -> -2146413184
+ sys_exec -> -2146413648
+ sys_open -> -2146414416
+ sys_close -> -2146415424
+ sys_write -> -2146415536
+ sys_write -> -2146415536
+ sys_read -> -2146415648


## Url del commit:
https://github.com/S0mbiy/Super-OS2/commit/2e07b3a9ee9771ee325f00f12d9878d161f8d552

## Como se relaciona con los conceptos anteriores?
Aqui se hacen uso de dos llamadas a sistema, fork y exec y tienen que ser llamadas a sistema porque yo programa no puedo 
acceder a memoria para el fork ni a disko duro para el exec.
