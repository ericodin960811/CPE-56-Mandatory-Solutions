#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n, d, r, index_old, index_new;
    bool end;

    while (cin >> n >> d && d > 0){
        int pos[1005];
        memset(pos, -1, sizeof(pos));
        string fraction = "";
        end = false;

        cout << ".";

        for (int i = 0; i < 1005; ++i){
            if (n == 0 || pos[n] != -1){
                index_old = pos[r];
                index_new = i;
                if (r == 0) end = true;
                break;
            }
            pos[n] = i;
            n *= 10;
            fraction += to_string(n / d);
            r = n - (n / d) * d;
            n = r;
        }
        
        int counter = 0;
        for (char c : fraction){
            counter++;
            if (counter % 50 == 0) cout << endl;
            cout << c;
        }
        if (end){
            cout << endl << "This expansion terminates." << endl;
        }else{
            cout << endl << "The last " << index_new - index_old << " digits repeat forever." << endl;
        }
    }

    return 0;
}