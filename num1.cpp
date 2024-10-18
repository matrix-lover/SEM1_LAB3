//exercise num 1

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

using namespace std;

template<class T>
vector<T> generate_random_vector(size_t num, T min = -100, T max = 100)
{
        random_device rd;
        mt19937 e2(rd());
        uniform_real_distribution<> dist(-100, 100);

        auto lambda = [&e2, &dist] () -> T { return dist(e2); };

        vector<T> result(10);
        generate_n(result.begin(), num, lambda);
        return result;
}

int main() {
    vector<float> v = generate_random_vector<float>(10, -100, 50);
    int b = int (v.size()); // количество элементов
    
    cout << "Начальные значения" << endl;
        for (int i = 0; i < b; ++i){ // выведем значения элементов массива
            cout << i+1 << ": " << v[i] << endl;
        }
    cout << '\n';
    
    // Увеличиваем элементы массива в 2 раза:
    
        for (int i = 0; i < b; ++i){
            v[i] = v[i]*2;
        }
        for (int i = 0; i < b; ++i){ // выведем значения получившихся элементов массива
            cout << i+1 << ": " << v[i] << endl;
        }
        cout << '\n';
    
    // Вычитаем из каждого элемента массива число a
    
    int a;
    cout << "Введите число" << endl;
    cin >> a;
    cout << '\n';
    
        for (int i = 0; i < b; ++i){
            v[i] = v[i] - a;
        }
        for (int i = 0; i < b; ++i){ // выведем значения получившихся элементов массива
            cout << i+1 << ": " << v[i] << endl;
        }
    cout << '\n';
    
    // делим на первый элемент все элементы массива
    
        if (v[0] != 0){   // первый элемент не должен быть равен нулю
            int c = v[0]; // фиксируем значение первого элемента, так как он сменится единицей при первой итерации цикла for
            for (int i = 0; i < b; ++i){
                v[i] = v[i] / c;
            }
        } else { cout << "Первый элемент равен нулю, деление не произошло" << endl;}
    
        for (int i = 0; i < b; ++i){ // выведем значения получившихся элементов массива
            cout << i+1 << ": " << v[i] << endl;
        }
    
    return 0;
}
