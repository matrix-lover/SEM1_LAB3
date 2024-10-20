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
    if (i % 2 == 0){cout << "Четное колличество" << endl;}
    else {cout << "Нечетное колличество" << endl;}// количество букв
    return 0;
}
