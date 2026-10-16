#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, num;

    cin >> n;

    while (n--){
        cin >> num;

        if (num == 0){
        cout << "0" << endl; 
        continue;
        }
        
        if (num == 1){
            cout << "1" << endl; 
            continue;
        }

        map <int, int> Times;

        for (int i = 9; i >= 2; i--){
            while (num % i == 0){
                num /= i;
                Times[i]++;
            }
        }

        if (num > 9){
            cout << "-1" << endl;
            continue;
        }

        for (int i = 2; i <= 9; ++i){
            if (Times[i] != 0){
                for (int j = 1; j <= Times[i]; ++j){
                cout << i;
            }
            }
        }
        cout << endl;
    }

    return 0;
}