// exercise num 9
#include <string>
#include <iostream>

using namespace std;

int main() {
    string verb;
    cin >> verb;
    int utf = 1;
    string condi;
    cout << "Слово на русском языке?(да|нет)" << endl;
    cin >> condi;
    if (condi != "нет"){utf = 2;}
    string star = "*";
    string stars = "";
    int count = 0; //счетчик
    cout << '\n';
    
    while (verb[count] != 0){
        count += 1;         //аналогично .size
    }
    
    count = count / utf;
    
    for (int i = 0; i < count; ++i){
        stars.insert(i, star);
    }
    count = count * 1.5;
    verb.insert(0, stars);
    verb.insert(count*2, stars);
    
    cout << verb << endl;
    return 0;
}

