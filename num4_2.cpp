//exercise num 4

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

        vector<T> result(20);
        generate_n(result.begin(), num, lambda);
        return result;
}


int main() {
    vector<int> v = generate_random_vector<int>(20, -100, 100);
    int b = int (v.size()); // количество элементов
    
    cout << "Начальные значения" << endl;
    for (int i = 0; i < b; ++i){ // выведем значения элементов массива
        cout << i+1 << ": " << v[i] << endl;
    }
    cout << '\n';
    
    // 2. удалить последний четный элемент (если четные элементы в массиве есть)
    int count2 = 0; //счетчик отрицательных чисел
    float digit;
    for (int i = b-1; i > -1; --i){
        if (v[i] % 2 == 0){
            count2 = 1;
            digit = i;
            break;
        }
    }
    if (count2 == 1){cout << "удаленный последний четный элемент: " << v[digit] << endl;
        for (int i = digit; i < b-1; ++i){
            v[i] = v[i+1];
        }
        v.pop_back();
        cout << "Получившийся массив" << endl;
        for (int i = 0; i < b-1; ++i){ // выведем значения элементов массива
            cout << i+1 << ": " << v[i] << endl;
        }
    }
    return 0;
}
