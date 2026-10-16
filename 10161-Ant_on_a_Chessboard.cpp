#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;

    while (cin >> n && n){
        int zone = sqrt(n);
        int x, y;

        if (zone * zone != n){
            zone++;
        }

        if (zone % 2 == 0){
            x = zone;
            y = 1;
        }else{
            x = 1;
            y = zone;
        }

        int steps = zone * zone - n;

        if (zone % 2 == 0){
            // up -> left
            if (steps <= zone - 1){
                for (int i = 0; i < steps; ++i){
                    y++;
                }
            }else{
                y += zone - 1;
                steps -= zone - 1;
                for (int i = 0; i < steps; ++i){
                    x--;
                }
            }
        }else{
            // right -> down
            if (steps <= zone - 1){
                for (int i = 0; i < steps; ++i){
                    x++;
                }
            }else{
                x += zone - 1;
                steps -= zone - 1;
                for (int i = 0; i < steps; ++i){
                    y--;
                }
            }
        }

        cout << x << " " << y << endl;
    }

    return 0;
}