#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int Coefficients[9];

    while (cin >> Coefficients[0]){
        for (int i = 1; i < 9; ++i){
            cin >> Coefficients[i];
        }

        bool first = true;

        for (int i = 0; i < 9; ++i){
            if (Coefficients[i] == 0) continue;

            int power = 8 - i;
            int abs_val = abs(Coefficients[i]);

            // sign
            if (first){
                if (Coefficients[i] < 0){
                    cout << "-";
                }
                first = false;
            }else{
                if (Coefficients[i] > 0){
                    cout << " + ";
                }else{
                    cout << " - ";
                }
            }

            // coefficient
            if (abs_val != 1 || power == 0){
                cout << abs_val;
            }
            

            // x & power
            if (power != 0){
                if (power == 1){
                    cout << "x";
                }else{
                    cout << "x^" << power;
                }
            }
        }
        if (first == true){
            cout << 0;
        }
        cout << endl;
    }
        
    return 0;
}