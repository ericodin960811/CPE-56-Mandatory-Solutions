#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    char colon;

    while (cin >> n >> colon && n){
        vector <int> Nums(n);
        vector <int> Pos(n);

        for (int i = 0; i < n; ++i){
            cin >> Nums[i];
            Pos[Nums[i]] = i;
        }

        bool isAnti = true;

        for (int i = 0; i < n; ++i){
            for (int j = i + 1; j < n; ++j){
                int A = Nums[i];
                int B = Nums[j];
                int C = B + (B - A);

                if (C >= 0 && C < n){
                    if (Pos[C] > j){
                        isAnti = false;
                        break;
                    }
                }
            }
            if (!isAnti) break;
        }

        if (isAnti){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }

    return 0;
}