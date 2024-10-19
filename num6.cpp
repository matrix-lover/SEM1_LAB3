//exercise num 6

#include <iostream>

using namespace std;

int main() {
    string sec_name1;
    string sec_name2;
    cin >> sec_name1;
    cin >> sec_name2;
    cout << '\n';
    if (size(sec_name1) > size(sec_name2)){
        cout << sec_name1;
    } else {cout << sec_name2;}
    return 0;
}
