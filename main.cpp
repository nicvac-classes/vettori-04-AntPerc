#include <iostream>
using namespace std;
int main() {
    int n, i, min, imin, max, imax, contPari;
    cout << "Quanti numeri casuali dobbiamo generare?" << endl;
    cin >> n;
    int numeri[n];

    for (i = 0; i <= n - 1; i++) {
        numeri[i] = random() % 1001;
        cout << i + 1 << "Numero: " << numeri[i] << endl;
    }
    cout << "Calcolo di quanti numeri pari sono stati generati..." << endl;
    contPari = 0;
    for (i = 0; i <= n - 1; i++) {
        if (numeri[i] % 2 == 0) {
            contPari = contPari + 1;
        }
    }
    cout << "Sono stati generati: " << contPari << "numeri pari" << endl;
    cout << "Calcolare il numero minore e il numero maggiore..." << endl;
    min = numeri[0];
    imin = 0;
    max = numeri[0];
    imax = 0;
    for (i = 1; i <= n - 1; i++) {
        if (numeri[i] < min) {
            min = numeri[i];
            imin = i;
        }
        if (numeri[i] > max) {
            max = numeri[i];
            imax = i;
        }
    }
    cout << "Il valore minimo è: " << min << " in posizione " << imin << endl;
    cout << "Il valore massimo è: " << max << " in posizione " << imax << endl;
    return 0;
}