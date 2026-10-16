#include <iostream>
using namespace std;

int main(){
    long long n;

    while (cin >> n){
        long long capacity = 1; // cap = 3, n = 3

        while (n > capacity){
            n -= capacity;
            capacity++;
        }

        long long numerator = capacity - n + 1;
        long long denominator = capacity - numerator + 1;

        cout << numerator << "/" << denominator << endl;
    }

    return 0;
}