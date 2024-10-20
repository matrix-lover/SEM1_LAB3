// exercise num 10
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string verb;
    cin >> verb;
    int utf = 1;
    float coun = 0; //счетчик
    cout << '\n';
    
    while (verb[coun] != 0){
        coun += 1;         //аналогично .size
    }
    float amount_a = count(verb.begin(), verb.end(), 'a');
    cout << (amount_a/coun)*100 << endl;
    return 0;
}
