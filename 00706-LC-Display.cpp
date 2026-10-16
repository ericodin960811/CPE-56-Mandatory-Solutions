#include <iostream>
using namespace std;

int seg[10][7] = {
    {1, 1, 1, 0, 1, 1, 1}, // 0
    {0, 0, 1, 0, 0, 1, 0}, // 1
    {1, 0, 1, 1, 1, 0, 1}, // 2
    {1, 0, 1, 1, 0, 1, 1}, // 3
    {0, 1, 1, 1, 0, 1, 0}, // 4
    {1, 1, 0, 1, 0, 1, 1}, // 5
    {1, 1, 0, 1, 1, 1, 1}, // 6
    {1, 0, 1, 0, 0, 1, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}  // 9
};

int main(){
    int s;
    string n;

    while (cin >> s >> n && s){
        char canvas[30][150];
        int height = s * 2 + 3;
        int width = n.size() * (s + 2) + (n.size() - 1);
        int col = 0;

        for (int i = 0; i < height; ++i){
            for (int j = 0; j < width; ++j){
                canvas[i][j] = ' ';
            }
        }

        for (int i = 0; i < n.size(); ++i){
            if (seg[n[i] - '0'][0]){ // 0
                for (int j = 0; j < s; ++j){
                    canvas[0][col + j + 1] = '-';
                }
            }
            if (seg[n[i] - '0'][3]){ // 3
                for (int j = 0; j < s; ++j){
                    canvas[s + 1][col + j + 1] = '-';
                }
            }
            if (seg[n[i] - '0'][6]){ // 6
                for (int j = 0; j < s; ++j){
                    canvas[2 * s + 2][col + j + 1] = '-';
                }
            }

            if (seg[n[i] - '0'][1]){ // 1
                for (int j = 0; j < s; ++j){
                    canvas[j + 1][col] = '|';
                }
            }
            if (seg[n[i] - '0'][2]){ // 2
                for (int j = 0; j < s; ++j){
                    canvas[j + 1][col + s + 1] = '|';
                }
            }
            if (seg[n[i] - '0'][4]){ // 4
                for (int j = 0; j < s; ++j){
                    canvas[j + s + 2][col] = '|';
                }
            }
            if (seg[n[i] - '0'][5]){ // 5
                for (int j = 0; j < s; ++j){
                    canvas[j + s + 2][col + s + 1] = '|';
                }
            }
            col += s + 3;
        }

        for (int i = 0; i < height; ++i){
            for (int j = 0; j < width; ++j){
                cout << canvas[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}

// .-...-.
// |.|.|.|
// .-...-.
// |.|.|.|
// .-...-.
