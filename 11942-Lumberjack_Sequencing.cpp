#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "Lumberjacks:" << endl;

    while (n--){
        vector <int> beard;
        vector <int> org;
        int length;
        bool ordered = true;

        for (int i = 0; i < 10; ++i){
            cin >> length;
            beard.push_back(length);
        }

        org = beard;
        sort(beard.begin(), beard.end(), greater <int> ());

        if (org != beard){
            sort(beard.begin(), beard.end(), less <int> ());
            if (org != beard){
                ordered = false;
            }
        }

        if (ordered){
            cout << "Ordered" << endl;
        }else{
            cout << "Unordered" << endl;
        }
    }

    return 0;
}