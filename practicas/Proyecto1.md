## Objetivo
Modifica el kernel de xv6 para que imprima cada vez que una llamada a sistema se emplee se imprima una línea con el nombre de la llamada a sistema y su número.
Agregar otra llamada a sistema (date) a xv6 que consulte el reloj de la computadora y devuelva el tiempo en formato UTC.

## Herraminetas
git
make
gcc

## Conceptos
1) Como se crean nuevos programas
+ creas una llamada a systema
+ creas un archivo que mande a llamar la llamada a sistema
+ creas un commando para el usuario que mande a llamar al archivo

## Que aprendi?
When it starts it calls  

+ sys_exec -> -2146413648 : carga el codigo del init 
+ sys_open -> -2146414416 : abre el codigo
+ sys_mknod -> -2146413968 : crea un archivo especial para el equipo
+ sys_open -> -2146414416 : abre el archivo especial
+ sys_dup -> -2146415744 : crea un alias para el archivo especial
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

Aprendi a trabajar con estructuras y como repaso vi como crear llamadas a sistema y programas y como estos dos interactuan entre si.
## Url del commit:
https://github.com/S0mbiy/Super-OS2/commit/aa63dbd6b771f92bee5dbbc52a33c76071db8b12

## Como se relaciona con los conceptos anteriores?
Se repaso lo visto en el semestre de como se crean llamadas a systema y programas del sistema operativo asi como se repaso el uso de las llamadas a sistema.
