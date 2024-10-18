//exercise num 3

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
    vector<int> v = generate_random_vector<int>(20, -100, 50);
    int b = int (v.size()); // количество элементов
    int a = 3;
    int mass1[a];
    int mass2[a];
    
    cout << "Начальные значения" << endl;
    for (int i = 0; i < b; ++i){ // выведем значения элементов массива
        cout << i+1 << ": " << v[i] << endl;
    }
    cout << '\n';
    
    //Переставить первые три и последние три элемента массива, сохранив порядок их следования.
    
    for (; a > 0; --a){ // a от 3 до 1
        // далее смещение на 1, так как нумерование элементов массива начинается с нуля
        mass1[a-1] = v[a-1];
        mass2[a-1] = v[(b-3)+(a-1)];
    }
        // далее смещения нет, так как переменная a от 0 до 2
    for (; a < 3; ++a){ // a от 0 до 2
        v[a] = mass2[a];
        v[(b-3)+a] = mass1[a];
    }
    
    cout << "Конечные значения" << endl;
    for (int i = 0; i < b; ++i){ // выведем значения получившихся элементов массива
        cout << i+1 << ": " << v[i] << endl;
    }
    
    return 0;
}
