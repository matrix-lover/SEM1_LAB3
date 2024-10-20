//exercise num 5
// если название города дано на английском, то все считается верно
//однако считается количество байт(или же количество char-ов).
// поэтому эта программа рассчитана на английскую раскладку
#include <string>
#include <iostream>

using namespace std;

int main() {
    string city;
    cin >> city;
    int i = 0; //счетчик
    cout << '\n';
    while (city[i] != 0){
        i += 1;         //аналогично .size
    }
    cout << i << endl; // количество букв
    
    return 0;
}

