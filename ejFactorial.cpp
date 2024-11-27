#include "graphics.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>
using namespace std;
int factorial(int num) {
    int resultado = 1; 
    for (int i = 1; i <= num; i++) {
        resultado *= i; 
        cout << i<<" "<<"x"<<" ";
    }
    return resultado; 
}
int validarNum(int num) {
    if (num >= 1 && num <= 25) {
        int resultado = factorial(num);
        cout << "\n[!] El factorial de " << num << " es: " << resultado << endl;
        return resultado;
    }
    else {
        cout << "\n[!] Por favor, introduce un numero valido (entre 1 y 25)." << endl;
        return -1; 
    }
}
int esPar(int num) {
    if (num % 2 == 0) {
        cout << "[+]El numero es par";
        return 1;
    }
    else {
        cout << "[-]El numero no es par";
        return -1;
    }

}
int main() {
    string continuar = "s";
    while (continuar == "s") {
        int num, resultado;

        cout << "\n\n[+] Introduce un numero entre 1 y 25: ";
        cin >> num;
        resultado = validarNum(num);
        if (resultado != -1) {
            cout << "\n[!] El calculo fue exitoso.\n";
        }
        else {
            return main();
        }
        esPar(resultado);
        cout << "\n\n[?] ¿Quieres volver a probar? (s/n): ";
        cin >> continuar;
    }
    return 0;
}