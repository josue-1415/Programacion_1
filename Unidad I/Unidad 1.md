# Unidad 1

Comentario en una linea: `// este es un comentario en una linea`

Comentario en varias lineas: 
```
/* Comentario en varias lineas: 

Un párrafo como comentario */

```

Estructura de un programa en c++.
```c++
// Librerías
#include <iostream> // permite al programa imprimir datos en la pantalla

// Función principal
int main() // la función main comienza la ejecución del programa
{
std::cout << "Bienvenido a C++!\n"; // muestra un mensaje

return 0; // indica que el programa terminó con éxito
} // fin de la función main
```

* `#include <iostream>`: *permite al programa ingresar datos desde el teclado e imprimir datos en la pantalla.*
------------------------------------------------
> 1. Las líneas que empiezan con `#` son procesadas por el preprocesador antes de que se compile el programa.
> 2. Esta línea indica al preprocesador que debe incluir en el programa el contenido del archivo de encabezado de flujos de entrada(input)/salida(output) `<iostream>`. 
> 3. Este archivo debe incluirse para cualquier programa que muestre datos en la pantalla, o que reciba datos del teclado, mediante el uso de la entrada/salida de flujos al estilo C++.

------------------------------------------------

* ```c++
  int main() // es la función principal del programa.
  {
       
  }
  ```
------------------------------------------------
> 1. Esta funcion principal forma parte de todo programa en C++.
> 2. Esta función es la primera que se ejecuta al iniciar el programa.
> 3. La función main es obligatoria. 
> 4. Los paréntesis después de `main` indican que éste es un bloque de construcción
denominado ***función***.
> 5. Sólo debe haber una función main en cada programa.
> 6. Los programas en C++ empiezan a ejecutarse en la función main, aun si main no es la primera función en el programa. 
> 7. La palabra clave `int` a la izquierda de `main` indica que “la funcion devuelve” un valor entero.
> 8. La llave izquierda `{`, indica que el bloque de construcción inicia.   
> 9. La llave derecha `}`, indica que el bloque de construcción termina.
------------------------------------------------

* `std::cout << "Bienvenido a C++!\n" ;`: *muestra un mensaje en la pantalla, esta misma le indica a la computadora que debe realizar una acción.*
------------------------------------------------
> 1. Esta es una instrucción de salida de datos.
> 2. Imprime la cadena de caracteres contenida entre las comillas dobles. 
> 3. El caracter de salto de línea es el `\n`.
> 4. El caracter de salto de línea es una instrucción de salida de datos.
> 5. A una cadena se le conoce algunas veces como ***cadena de caracteres***, ***mensaje*** o ***literal de cadena***. 
> 6. A los caracteres entre comillas dobles los denominamos simplemente ***cadenas***. 
> 7. El compilador no ignora los caracteres de
espacio en blanco en las cadenas.

La linea de comando `std::cout<<"Bienvenido a cC++!\n";` se le conoce como instrucción.

Cada instrucción en C++ debe terminar con un punto y coma (también conocido como terminador de instrucciones).

Las directivas del preprocesador (como `#include`) no terminan con un punto y coma. 

En C++, las operaciones de entrada y salida se realizan mediante flujos de caracteres.

Se coloca `std::` antes de `cout`. Esto se requiere cuando utilizamos nombres que hemos traído al programa por la directiva del preprocesador `#include <iostream>`. 

La notación `std::cout` especifica que estamos
usando un nombre (en este caso `cout`) que pertenece al “espacio de nombres” `std`. Los nombres `cin` (el flujo de entrada
estándar) y `cerr` (el flujo de error estándar), también pertenecen al espacio de nombres
std. 

El operador `<<` se conoce como el operador de inserción de flujo. Cuando este programa se ejecuta, el valor a la derecha del operador (el operando derecho) se inserta en el flujo de salida. Observe que el operador apunta en la
dirección hacia la que van los datos.

Por lo general, los caracteres del operando derecho se imprimen exactamente como
aparecen entre las comillas dobles. Sin embargo, los caracteres `\n` no se imprimen en la pantalla. A la barra diagonal inversa (`\`) se le llama *carácter de escape*. Este carácter indica que se va a imprimir en pantalla un carácter *"especial"*. 

La secuencia de escape `\n` representa una nueva línea.
Hace que el cursor (es decir, el indicador de la posición actual en la pantalla) se desplace al principio de la siguiente línea
en la pantalla.

|Secuencia de escape  `std::cout<<" ":;`|Descripción    |
|:------------------- |:------------- |
|`\n`                 |Salto de línea     |
|`\t`                 |Tabulación         |
|`\r`                |Retorno de carro. Coloca el cursor de la pantalla al inicio de la línea actual; no avanza a la siguiente línea.    |
|`\a`                |Alarma. Sonido de alarma. |
|`\\`               |Barra diagonal inversa. Se usa para imprimir un carácter de barra diagonal inversa|
|`\'`                |Comilla simple. Se usa para imprimir un carácter de comilla simple.|
|`\"`                |Comilla doble. Se usa para imprimir un carácter de comilla doble.|
|`\?`                |Pregunta. Se usa para imprimir un carácter de pregunta.|


------------------------------------------------
`return 0;`:indica que el programa terminó con éxito es uno de varios medios que utilizaremos para salir de una función. 

Cuando se utiliza la instrucción `return` al final de `main`, como se muestra aquí, el valor 0 indica que el programa ha terminado correctamente.

------------------------------------------------

## Palabras clave de C++ (palabras reservadas)

`#include`: *directiva de preprocesador* que incluye una libreria en el programa.

`std::cout`: *nombre de flujo de salida* que se usa para imprimir en pantalla.

`std::cin`: *nombre de flujo de entrada* que se usa para leer de la pantalla.

`std::endl`: *nombre de flujo de salida* que se usa para imprimir un salto de línea.

`<<` se conoce como *operador de inserción de flujo*.

`>>` se conoce como *operador de extracción de flujo*.

`return 0`: *palabra reservada* que indica que el programa terminó correctamente.

