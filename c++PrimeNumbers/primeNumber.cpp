#include <iostream>
#include <vector>
using namespace std;

// Función para verificar si un número es primo
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Función para mostrar todos los números primos en un rango dado
void displayPrimesInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int choice, num, n, start, end;
    vector<int> numbers;

    cout << "Ingrese un numero para verificar si es primo: ";
    cin >> num;
    if (isPrime(num)) {
        cout << num << " es un numero primo.\n";
    } else {
        cout << num << " no es un numero primo.\n";
    }

    cout << "\n¿Cuántos numeros desea ingresar para verificar los primos en la lista? ";
    cin >> n;
    cout << "Ingrese los numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> num;
        numbers.push_back(num);
    }

    cout << "Numeros primos en la lista: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(numbers[i])) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    cout << "\nIngrese el rango para mostrar los numeros primos (inicio fin): ";
    cin >> start >> end;
    cout << "Numeros primos en el rango de " << start << " a " << end << ": ";
    displayPrimesInRange(start, end);

    return 0;
}