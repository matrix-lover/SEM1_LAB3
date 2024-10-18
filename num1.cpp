//exercise num 1

#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main() {
    vector<int> v{10, 30, 56, 24, 98, 67, 14, 75, 47, 100};
    int b = int (v.size()); // количество элементов
    
// Увеличиваем элементы массива в 2 раза:
    
    for (int i = 0; i < b; ++i){
        v[i] = v[i]*2;
    }
// Вычитаем из каждого элемента массива число a
    
    int a;
    cin >> a;
    
    for (int i = 0; i < b; ++i){
        v[i] -= a;
    }
// делим на первый элемент все элементы массива
    
    if (v[0] != 0){   // первый элемент не должен быть равен нулю
        int b = v[0]; // фиксируем значение первого элемента, так как он сменится единицей при первой итерации цикла for
        for (int i = 0; i < b; ++i){
            v[i] = b / v[0];
        }
    } else { cout << "Первый элемент равен нулю, деление не произошло" << endl;}
    
    
    
    for (int i = 0; i < b; ++i){
        cout << v[i] << endl;
    }
    
    
    cout << v.capacity() << endl;
    
    return 0;
}
