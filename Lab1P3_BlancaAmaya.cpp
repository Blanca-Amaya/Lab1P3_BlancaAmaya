#include <iostream>
using namespace std;

int main() {
    float peso = 0;
    float altura = 0;
    float imc = 0;
    cout << "Ingrese su peso: ";
    cin >> peso;
    cout << "Ingrese su altura: ";
    cin >> altura;
    float altura_cm = altura * 0.01;
    imc = (peso/2.2) / (altura_cm* altura_cm);
    cout << "Su indice de masa corporal es: " << imc << endl;
}