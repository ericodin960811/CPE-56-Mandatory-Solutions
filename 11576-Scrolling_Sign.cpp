#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, k, w;

    cin >> n;

    while (n--){
        cin >> k >> w;

        string input[w];
        int counter = k * w;

        for (int i = 0; i < w; ++i){
            cin >> input[i];
        }

        for (int i = 0; i < w - 1; ++i){
            for (int l = k; l > 0; l--){
                if (input[i].substr(k - l, l) == input[i + 1].substr(0, l)){
                    counter -= l;
                    break;
                }
            }
        }
        
        cout << counter << endl;
    }

    return 0;
}