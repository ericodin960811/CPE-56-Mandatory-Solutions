#include <iostream>
using namespace std;

int main(){
    long long n;

    while (cin >> n){
        long long index = ((n + 1) / 2) * ((n + 1) / 2);
        long long last = index * 2 - 1;
        cout << 3 * (last - 2) << endl;
    }

    return 0;
}
