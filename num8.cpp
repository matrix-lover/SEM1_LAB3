//exercise num 8

#include <string>
#include <iostream>

using namespace std;

int main() {
    string verb = "insert into a text";
    string verb_part = "";
    int m;
    int n;
    cin >> verb;
    cin >> m;
    cin >> n;
    cout << '\n';
    verb_part.insert(0, verb, m-1, n-m+1);
    
    cout << verb_part << endl;
    return 0;
}
