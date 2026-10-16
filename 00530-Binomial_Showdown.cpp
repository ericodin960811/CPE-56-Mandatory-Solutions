#include <iostream>
using namespace std;

int main(){
    long long n, k;

    while (cin >> n >> k && n){
        if (n - k < k){
            k = n - k;
        }

        long long ans = 1;

        for (long long i = 1; i <= k; ++i){
            ans = ans * (n - i + 1) / i;
        }

        cout << ans << endl;
    }

    return 0;
}

//                n!
// C(n, k) = ------------
//            k!(n - k)!

//            n * (n - 1) * ... * (n - k + 1)
//         = ---------------------------------
//                  1 * 2 * ... * k
