## Objetivo
Crear dos llamadas a sistema, una para apagar y otra para reiniciar.
Y crear sus respectivos programas.

## Herraminetas
git
make
gcc

## Conceptos
1) Llamadas a sistema
+ La forma que el kernel da acceso al HW
+ Se implementan medinate interrupciones de software (trap), 
ie la aplicacion se interrumpe para que el kernel se ejecute

2) Modo kernel
+ Es bit/registro que activa el CPU para acceder al HW
+ Solo hay un programa que se ejecuta con este bit, el kernel

3) Interrupciones
+ Es la forma que le hardware interactua con el CPU

4) Interrupciones via Software (trap)
+ Software comunica con el Kernel, SW->CPU->Kernel 

## Que aprendi?
Para agregar una funcion al sistema operativo se necesita primero generar una llamada al sistema, luego el kernel tiene que entender que significa la llamada por lo que se le agrega a la API de funciones y por ultimo tiene que haber un archivo .c con lo que se debe de hacer y haber una referencia a ese archivo desde la funcion que manda a llamar el kernel.

## Url del commit:
https://github.com/S0mbiy/Super-OS2/commit/979c4a4d3e052cf12ba6e4b462d90ef077c52c84
