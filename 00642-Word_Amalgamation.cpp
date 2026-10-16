#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string word;
    string input;
    vector <string> Words;
    vector <string> SortedWords;
    
    while (cin >> word && word != "XXXXXX"){
        Words.push_back(word);
    }

    sort(Words.begin(), Words.end());

    for (int i = 0; i < Words.size(); ++i){
        string temp = Words[i];
        sort(temp.begin(), temp.end());
        SortedWords.push_back(temp);
    }

    while (cin >> input && input != "XXXXXX"){
        bool found = false;
        sort(input.begin(), input.end());

        for (int i = 0; i < SortedWords.size(); ++i){
            if (SortedWords[i] == input){
                cout << Words[i] << endl;
                found = true;
            }
        }
        if (!found) cout << "NOT A VALID WORD" << endl;
        cout << "******" << endl;
    }

    return 0;
}