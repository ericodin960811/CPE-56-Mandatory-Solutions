#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int size, p, k;

    while (cin >> size >> p && size){
        k = ceil(sqrt(p));
        if (k % 2 == 0) k++;

        int mid = (size + 1) / 2;
        int line = mid + (k - 1) / 2;
        int col = mid + (k - 1) / 2;
        int steps = k * k - p;
        int l = k - 1;

        if (p == 1) {
            cout << "Line = " << mid << ", column = " << mid << ".\n";
            continue;
        }

        // down left up right
        if (steps <= l){ // down
            line -= steps;
        }else if (steps <= 2 * l){ // left
            line -= l;
            col -= steps - l;
        }else if (steps <= 3 * l){ // up
            line -= l;
            col -= l;
            line += steps - 2 * l;
        }else{ // right
            col -= l;
            col += steps - 3 * l;
        }

        cout << "Line = " << line << ", column = " << col << "." << endl;
    }

    return 0;
}