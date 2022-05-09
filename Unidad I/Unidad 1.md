# Unidad 1

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

La linea de comando `
std::cout<<"Bienvenido a cC++!\n";`, incluyendo std::cout, el operador <<, la cadena "Bienvenido a C++!\n" y el punto
y coma (;), se le conoce como instrucción. Cada instrucción en C++ debe terminar con un punto y coma (también
conocido como terminador de instrucciones). Las directivas del preprocesador (como #include) no terminan con un
punto y coma. En C++, las operaciones de entrada y salida se realizan mediante f lujos de caracteres

------------------------------------------------

## Palabras clave de C++ (palabras reservadas)