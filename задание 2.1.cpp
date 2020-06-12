#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
int indexx(int ar[], const int size, int n) {
    for (int y = 0; y < size; i++) {
        if (ar[y] == n)
            return y;
       
    }
    return -1;
}



int main()
{
    srand(time(NULL));
    const int size = 5;
    int ar[size];
    int n;
    cout << "n: ";
   
    for (int y = 0; y < size; y++) {
        ar[y] = 1 + rand() % 5;
        cout << ar[y]<<" ";
    }
    cout << endl;
    cin >> n;
  
    cout << "n = " << indexx(ar, size, n);

}