#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    return abs(a) > abs(b);
}

int main(){
    int p, t, area;
    cin >> p;

    while (p--){
        cin >> t;
        vector <int> Floors;

        while (t--){
            cin >> area;
            Floors.push_back(area);
        }

        sort(Floors.begin(), Floors.end(), cmp);

        int height = 1;
        for (int i = 1; i < Floors.size(); ++i){
            if ((Floors[i - 1] > 0 && Floors[i] < 0) || (Floors[i - 1] < 0 && Floors[i] > 0)){
                height++;
            }
        }
        cout << height << endl;
    }

    return 0;
}