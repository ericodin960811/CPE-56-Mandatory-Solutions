#include <iostream>
using namespace std;

int t, n, h;

void dfs(int index, int ones_left, string current){
    if (ones_left > n - index) return;

    if (index == n){
        if (ones_left == 0){
            cout << current << endl;
        }
        return;
    }

    // 0
    dfs(index + 1, ones_left, current + "0");

    // 1
    dfs(index + 1, ones_left - 1, current + "1");
}

int main(){
    cin >> t;

    while (t--){
        cin >> n >> h;

        dfs(0, h, "");

        if (t > 0){
            cout << endl;
        }
    }

    return 0;
}