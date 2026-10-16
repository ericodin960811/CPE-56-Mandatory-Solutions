#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n, num;
    cin >> n;

    for (int i = 1; i <= n; ++i){
        cout << "Case #" << i << ": ";
        cin >> num;

        if (num == 0){
            cout << "0" << endl;
            continue;
        }

        string ans = "";

        while (num != 0){
            int q, r;
            r = num % -2;
            q = num / -2;

            if (r < 0){
                r += 2;
                q += 1;
            }
            ans += r + '0';
            num = q;
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}