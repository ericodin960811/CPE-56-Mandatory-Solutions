#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n;

    while (cin >> n && n){
        queue <int> Deck;
        vector <int> Discarded;

        for (int i = 1; i <= n; ++i){
            Deck.push(i);
        }

        while (Deck.size() > 1){
            Discarded.push_back(Deck.front());
            Deck.pop();
            int temp = Deck.front();
            Deck.pop();
            Deck.push(temp);
        }

        cout << "Discarded cards: ";

        for (int i = 0; i < n - 1; ++i){
            if (i < n - 2){
                cout << Discarded[i] << ", ";
            }else{
                cout << Discarded[i];
            }
        }
        cout << endl;
        cout << "Remaining card: " << Deck.front() << endl;
    }

    return 0;
}