// exercise num 9
#include <string>
#include <iostream>

using namespace std;

int main() {
    string verb;
    cin >> verb;
    string star = "*";
    string stars = "";
    int count = 0; //счетчик
    cout << '\n';
    
    while (verb[count] != 0){
        count += 1;         //аналогично .size
    }
    
    for (int i = 0; i < count; ++i){
        stars.insert(i, star);
    }
    
    verb.insert(0, stars);
    verb.insert(count*2, stars);
    
    cout << verb << endl;
    return 0;
}
