#include <iostream>
#include <time.h>
using namespace std;

void funmas(int ar[], const int size) {
    for (int y = 0; y < size; y++) {
        ar[y] = 1 + rand() % 5;
    }
    for (int y = 0; y < size; y++) {
        cout << ar[y] << endl;
    }

}
void funmas2(int ar[], const int size) {
    for (int y = 0; y < size; y++) {
        if (ar[y] % 2 == 0) {
            cout << ar[y] << endl;
        }
        else {
            cout << "-" << endl;
        }
    }

}


int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));
    const int size = 5;
    int ar[size];
    cout << "первый масив" << endl;
    funmas(ar, size);
    cout << endl;
    cout << "Масив только с простыми элементами" << endl;
    funmas2(ar, size);
}