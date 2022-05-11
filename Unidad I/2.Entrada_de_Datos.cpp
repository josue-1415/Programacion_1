#include <iostream> //Importar libreria para escribir en pantalla.

using namespace std; //Se utiliza para no escribir std::cout.

int main() {

    /*  Variables: Son entidades que nos permiten almacenar informacion y poder hacer
        operaciones con ellas.

        Sintaxis: TipoDeDato NombreDeLaVariable;

        TipoDeDato: Es el tipo de dato que va a almacenar la variable.
        NombreDeLaVariable: Es el nombre que le daremos a la variable.

        ---------------------------------------------------------------------------------
        ---------------------------------TIPOS DE DATOS----------------------------------
        ---------------------------------------------------------------------------------

        Las variables se declaran con la palabra reservada "int", "double", "char",
        "bool", "float", "long", "short", "unsigned", "signed", "void", "const",
        "volatile", "static", "auto", "register", "extern", "typedef", "union",
        "struct", "enum".
    */

    string nombre; //Declarar una variable de tipo string (String : Almacena una Cadena de texto).
    int edad; //Declarar una variable de tipo int (Almacena un valor Entero).

    cout<<"Bienvenido a mi segundoo programa en c++ \n";
    cout<<"Ingrese su nombre: "<<endl;
    cin>>nombre;    //cin>>nombre es una forma de leer una variable de tipo string. 
    cout<<"Ingrese su edad: "<<endl;
    cin>>edad;    //cin>>edad es una forma de leer una variable de tipo int.
    cout<<"Hola "<<nombre<<"!! , su edad es de "<<edad<<" años. \n";

    return 0;
}