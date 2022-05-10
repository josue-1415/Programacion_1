#include <iostream> //Importar libreria para escribir en pantalla.

using namespace std; //Se utiliza para no escribir std::cout.

int main() {
    string nombre; //Declarar una variable de tipo string (Cadena de texto).
    int edad; //Declarar una variable de tipo int (Entero).

    cout<<"Bienvenido a mi segundoo programa en c++ \n";
    cout<<"Ingrese su nombre: "<<endl;
    cin>>nombre;
    cout<<"Ingrese su edad: "<<endl;
    cin>>edad;
    cout<<"Hola "<<nombre<<"!! , su edad es de "<<edad<<" años. \n";

    return 0;
}