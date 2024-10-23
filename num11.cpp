// exercise num 11
// рассчитано на английский
#include <string>
#include <iostream>

using namespace std;

int main() {
    string sentence = "Can you can a can as a canner can can a can?";
    string newWord;
    cin >> newWord;
    string sentence2 = "Can you can a can as a canner can can a can?";
    string empty = "";
    string probel = " ";
    int count = 0; // счетчик
    cout << '\n';
    
    const string sep = " , .?!";
    
    while (newWord[count] != 0){
        count += 1;         //аналогично .size
    }
    
    for (int i = 0; i < count; ++i){
        empty.insert(i, probel);
    }
    
    size_t Start = sentence2.find("Can");
    size_t End = sentence2.find_first_of(sep, Start + 1);
    if(End == string::npos) // если разделители слова не найдены
    {
        End = sentence.length();
    }
    sentence2.replace(Start, End - Start, empty);
    sentence.replace(Start, End - Start, newWord);

    for(int i = 0; i < 6; ++i){
        size_t start = sentence2.find("can");
        
        size_t end = sentence2.find_first_of(sep, start + 1);
        if(end == string::npos) // если разделители слова не найдены
        {
            end = sentence.length();
        }
        sentence2.replace(start, end - start, empty);
        sentence.replace(start, end - start, newWord);
    }
    
    cout << sentence << endl;
    return 0;
}

