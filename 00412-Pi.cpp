#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int n;
    int num;

    while (cin >> n && n){
        vector <int> Numbers(n);
        int counter = 0;

        for (int i = 0; i < n; ++i){
            cin >> Numbers[i];
        }

        for (int i = 0; i < n; ++i){
            for (int j = i + 1; j < n; ++j){
                if (gcd(Numbers[i], Numbers[j]) == 1){
                    counter++;
                }
            }
        }

        if (counter == 0){
            cout << "No estimate for this data set." << endl;
        }else{
            double pi = sqrt(6.0 * (n * (n - 1) / 2.0) / counter);
            cout << fixed << setprecision(6) << pi << endl;
        }
    }
    return 0;
}
// pi^2  = 6(n * (n - 1) / 2) / counter