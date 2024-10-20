//exercise num 6

#include <iostream>

using namespace std;

int main() {
    string sec_name1;
    string sec_name2;
    cin >> sec_name1;
    cin >> sec_name2;
    int count1 = 0;
    int count2 = 0;
    cout << '\n';
    while (sec_name1[count1] != 0){ // аналогично .size()
        count1 += 1;
    }
    while (sec_name2[count2] != 0){ // аналогично .size()
        count2 += 1;
    }
    if (count1 > count2){ cout << "Название первого города длиннее, чем у второго" << endl;}
    else if (count1 < count2){cout << "Название второго города длиннее, чем у первого" << endl;}
    else {cout << "Название городов одной длины" << endl;}
    cout << count1;
    cout << count2;
    return 0;
}
