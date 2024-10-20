//exercise num 5

#include <iostream>

using namespace std;

int main() {
    string city;
    cin >> city;
    int i = 0; //счетчик
    cout << '\n';
    while (city[i] != 0){
        i += 1;          //аналогично .size
    }
    cout << i << endl; // количество букв
    return 0;
}
