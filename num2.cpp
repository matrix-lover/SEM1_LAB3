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
    vector<float> v = generate_random_vector<float>(10, -100, 100);
    float b = float (v.size()); // количество элементов
    
    for (int i = 0; i < b; ++i){ // выведем значения элементов массива
        cout << i+1 << ": " << v[i] << endl;
    }
        
    // 1. Сумма всех элементов массива
        float sum = 0;
        for (int i = 0; i < b; ++i) {
            sum += v[i];
        
        }
    cout << "Сумма всех элементов массива: " << sum << endl;
    
    // 2. Сумма квадратов всех элементов массива
        float sum_sqr = 0;
        for (int i = 0; i < b; ++i) {
            sum_sqr += v[i]*v[i];
            
        }
    cout << "Сумма квадратов всех элементов массива: " << sum_sqr << endl;
    
    
    // 3. Сумма первых шести элементов массива
        float sum_first6 = 0;
        for (int i = 0; i < 5; ++i) {
            sum_first6 += v[i];
            
        }
        cout << "Сумма первых шести элементов массива: " << sum_first6 << endl;
    
    // 4. Сумма элементов массива с  k1-го по  k2й (значения  k1 и k2 вводятся с клавиатуры; k2 > k1)
    cout << "Введите два числа от 1 до b" << endl;
    int k1;
    int k2;
    cin >> k1;
    cin >> k2;
    float sum_k1_k2 = 0;
    cout << '\n';
        for (; k1 <= k2 ; ++k1) {
            sum_k1_k2 += v[k1-1];
            
        }
        cout << "Сумма элементов массива с  k1-го по  k2й: " << sum_k1_k2 << endl;
    
    // 5. среднее арифметическое всех элементов массива
        //воспользуемся найденной в первом пункте суммой элементов массива:
    float sec_arif;
        sec_arif = sum / b;   // где b = v.size()
        cout << "Cреднее арифметическое всех элементов массива: " << sec_arif << endl;
    
    // 6. Cреднее арифметическое элементов массива с s1-го по s2-й (значения s1 вводятся с клавиатуры; s2 > s1
        // Повторяем пункт 4.
    cout << "Введите два числа от 1 до b" << endl;
    cin >> k1;
    cin >> k2;
    float sum_k1_k2_ = 0;
    float count = k2 - k1 + 1; // найдем количество слагаемых
    cout << '\n';
        for (; k1 <= k2 ; ++k1) {
            sum_k1_k2_ += v[k1-1];
        }
        //находим среднее арифметическое
    float sec_arif_k1_k2_ = 0;
        sec_arif_k1_k2_ = sum_k1_k2_ / count;
        cout << "Cреднее арифметическое элементов массива с s1-го по s2-й: " << sec_arif_k1_k2_ << endl;
    return 0;
}
