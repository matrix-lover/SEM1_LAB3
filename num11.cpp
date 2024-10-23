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
        
        sentence.replace(sentence.find("Can "), 3, newWord);
    }
    while(sentence.find(" can ") != string::npos){
        sentence.replace(sentence.find("can "), 3, newWord);
    }
    
    while(sentence.find("can?") != string::npos){
        sentence.replace(sentence.find("can?"), 3, newWord);
    }
    cout << sentence << endl;
    return 0;
}
