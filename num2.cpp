//exercise num 2

#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main() {
    vector<float> v{10, -30, 56, -24, 98, 67, 14, -75, 47, 100};
    int b = int(v.size()); // количество элементов массива
    
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
