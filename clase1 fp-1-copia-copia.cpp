#include <iostream>
using namespace std;

int main() {

    int a, b; 

    cout << "Ingerese el primer numero: ";
    cin >> a;

    cout<< "Ingrese el segundo numero ";
    cin >> b;


   // operaciones aritmeticas//

int suma = a + b;
int resta = a - b;
int multiplicacion = a * b;
int division = a / b;
int division2 = a % b;

//mostrar resultados//

cout << "suma: " << suma << endl;
cout << "resta: " << resta << endl;
cout << "multiplicacion: " << multiplicacion << endl;
cout << "division: " << division << endl;
cout << "division2: " << division2 << endl;



    return 0;
}