#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, n, k;
    string name[3005];
    int freq[3005];
    long long next_time[3005];

    cin >> t;
    while (t--){
        cin >> n >> k;

        for (int i = 0; i < n; ++i){
            cin >> name[i] >> freq[i];
            next_time[i] = freq[i];
        }

        while (k--){
            int min_index = 0;

            for (int i = 1; i < n; ++i){
                if (next_time[i] < next_time[min_index]){
                    min_index = i;
                }
            }

            cout << next_time[min_index] << " " << name[min_index] << endl;
            next_time[min_index] += freq[min_index];
        }
    }

    return 0;
}