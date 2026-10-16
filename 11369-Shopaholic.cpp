#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t, n, p;

    cin >> t;
    while (t--){
        int items[20005];
        int sum = 0;

        cin >> n;
        for (int i = 0; i < n; ++i){
            cin >> p;
            items[i] = p;
        }

        sort(items, items + n, greater <int> ());

        for (int i = 2; i < n; i += 3){
            sum += items[i];
        }
        cout << sum << endl;
    }

    return 0;
}