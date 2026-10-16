#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n;
    cin.ignore();

    while (n--){
        getline(cin, s);
        stack <char> Stack;

        for (char c : s){
            if (Stack.empty()){
                Stack.push(c);
            }else if (c == ')' && Stack.top() == '('){
                Stack.pop();
            }else if (c == ']' && Stack.top() == '['){
                Stack.pop();
            }else{
                Stack.push(c);
            }
        }

        if (Stack.size() == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}