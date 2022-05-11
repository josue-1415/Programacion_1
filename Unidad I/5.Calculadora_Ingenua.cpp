#include <iostream>

using namespace std; 

int main() {
    float n1, n2, suma, resta, producto, cociente;

    cout << "Ingrese el primer numero  : ";
    cin >> n1;
    cout << "Ingrese el segundo numero : "; 
    cin >> n2;

    suma = n1 + n2; 
    resta = n1 - n2; 
    producto = n1 * n2; 
    cociente = n1 / n2; 

    cout<<"La suma de los dos numeros ingresados es = "<<suma<<endl;
    cout<<"La resta de los dos numeros ingresados es = "<<resta<<endl;
    cout<<"El producto  de los dos numeros ingresados es = "<<producto<<endl; 
    cout<<"El cociente entre los dos numeros ingresados es = "<<cociente<<endl; 
    
    return 0;
}