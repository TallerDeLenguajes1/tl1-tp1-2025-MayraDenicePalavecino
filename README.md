# TP1 - MAYRA PALAVECINO

## Ejercicio 2

### punto 2

### apartado a


¿Qué es el archivo .gitignore?

El archivo .gitignore es un archivo especial que le indica a Git qué archivos o carpetas no debe incluir en el control de versiones (es decir, que no los agregue ni suba a GitHub).

¿Por qué es conveniente incluirlo?

Incluir un archivo .gitignore es conveniente para mantener limpio y organizado tu repositorio Git, evitando que archivos innecesarios (como dependencias, archivos de compilación o información confidencial) sean rastreados y subidos al repositorio.

¿Cuándo se debe hacer?

El archivo .gitignore se debe crear al iniciar un nuevo proyecto con Git o cuando se identifica la necesidad de ignorar archivos o carpetas específicos que no deben ser rastreados por el sistema de control de versiones. 

¿Cómo configuraría el archivo .gitignore?

Para configurar el archivo .gitignore, simplemente crea un archivo de texto con ese nombre en la raíz de tu repositorio Git y agrega en cada línea los nombres de archivos o directorios que deseas ignorar, utilizando patrones de coincidencia si es necesario.

### Punto 3

### apartado c

¿Qué archivos vé?
Se pueden ver los archivos:
.gitignore
README.md
tp1_1.c
tp1_1.exe

¿Cuál cree que no hace falta que esté?
El archivo tp1_1.exe no hace falta que este subido, dado que se genera de manera automatica con el codigo fuente y no aporta valor al desarrollo del proyecto.

### apartado g

Si resolvió correctamente los apartados 2 y 3 del punto anterior notará
que el resultado es el mismo. 

 ¿A qué se debe?

En los apartados 2 y 3 se obtiene el mismo resultado porque ambos muestran la dirección de memoria de la variable numero. En el apartado 2 lo vemos a través del puntero (que apunta a numero) y en el apartado 3 se accede directamente con &numero.

¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?

 En el apartado 4 se obtiene una dirección distinta porque se está mostrando la dirección de memoria del puntero, es decir, el lugar donde está guardado el puntero como variable. Esto es diferente del contenido del puntero, que es la dirección de otra variable explicado en el apartado anterior.





