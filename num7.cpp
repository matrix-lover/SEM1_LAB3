//exercise num 7

#include <iostream>

using namespace std;

int main() {
    string city1;
    string city2;
    string city3;
    cin >> city1;
    cin >> city2;
    cin >> city3;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    cout << '\n';
    // Найдем длины названий городов
    while (city1[count1] != 0){ // аналогично .size()
        count1 += 1;
    }
    while (city2[count2] != 0){ // аналогично .size()
        count2 += 1;
    }
    while (city3[count3] != 0){ // аналогично .size()
        count3 += 1;
    }
    
    //Найдем большее и меньшее с помощью среднего
    if ((count1 - count2)*(count1 - count3) < 0){ //city1 - средней длины
        if (count1 > count2) { // city2 меньше среднего
            cout << "самое длинное название: "<< city3 << "самое короткое название: " << city2 << endl;
        }
        else{                  // наоборот
            cout << "самое длинное название: "<< city2 << "самое короткое название: " << city3<< endl;
        }
    }
    
    else if ((count2 - count1)*(count2 - count3) < 0){ // city2 - средней длины
        if (count2 > count1) { // city1 меньше среднего
            cout << "самое длинное название: "<< city3 << "самое короткое название: " << city1 << endl;
        }
        else{                  // наоборот
            cout << "самое длинное название: "<< city1 << "самое короткое название: " << city3 << endl;
        }
    }
            
    else if ((count3 - count1)*(count3 - count2) < 0){ // city3 - средней длины
        if (count3 > count1) { // city1 меньше среднего
            cout << "самое длинное название: "<< city2 << "самое короткое название: " << city1 << endl;
        }
        else{                  // наоборот
            cout << "самое длинное название: "<< city1 << "самое короткое название: " << city2 << endl;
        }
    }
    else {cout << "какие-то из городов одной длины" << endl;}

    return 0;
}
