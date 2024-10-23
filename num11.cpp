// exercise num 11
// рассчитано на английский
#include <string>
#include <iostream>

using namespace std;

int main() {
    string sentence = "Can you can a can as a canner can can a can?";
    string newWord;
    cin >> newWord;
    int count = 0; // счетчик
    cout << '\n';
    
    const string sep = ".?!";
    
    while (newWord[count] != 0){
        count += 1;         //аналогично .size
    }
    
    while(sentence.find("Can ") != string::npos){
        unsigned long start = sentence.find("Can ");
        sentence.erase(start, 3);
        sentence.insert(start, newWord);
    }
    while(sentence.find(" can ") != string::npos){
        unsigned long start = sentence.find(" can ") + 1;
        sentence.erase(start, 3);
        sentence.insert(start, newWord);
    }
    
    while(sentence.find("can?") != string::npos){
        unsigned long start = sentence.find("can?");
        sentence.erase(start, 3);
        sentence.insert(start, newWord);
    }
    cout << sentence << endl;
    return 0;
}
