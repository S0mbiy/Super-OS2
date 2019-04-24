# Objetivo

Investigar y practicar sobre hilos.

# Herramientas

gcc
git

# Conceptos

+ Hilos:
 +  Proceso ligero
 +  solo tiene un stack y el codigo y el heap lo comparten con el proceso principal.
 +  si el proceso principal muere los hilos mueren

+ Lock:
 + Mecanismo de sincronizacion
 + variable global que soporta dos operaciones:
  + lock, el primer hilo que hace lock se adueña del lock y el resto espera
  + unlock el dueño del lock livera el lock
 + Ayuda para resolver el problema de sección crítica.

+ Semaforos:
 + Mecanismo de sincronizacion
 + variable global que tiene un valor mayor o igual a 0. Soporta dos operaciones:
  + wait/decrease, si es mayor a 0 decrementa y continua si es 0 espera.
  + post/increase, incrementa el valor en uno.
 + para asignar recursos.

+ Problemas de sincronizacion:
 + Condicion de carrera, ocurre cuando el resultado depende del orden en que se ejecutan los hilos.
 + Dead Lock, ocurre cuando dos o más hilos estan esperando por un recurso que no se libera.
 + Productor/Consumidor, ocurre cuando un proceso sobreescribe los datos

# URL del commit

# Qué Aprendí?
