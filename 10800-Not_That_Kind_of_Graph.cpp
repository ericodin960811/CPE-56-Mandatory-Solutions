#include <iostream>
using namespace std;

int main(){
    int n;
    string line;

    cin >> n;

    for (int i = 1; i <= n; ++i){
        cout << "Case #" << i << ":" << endl;
        cin >> line;

        char canvas[120][70];
        int minY = 100;
        int maxY = -100;
        int y = 55;

        for (int r = 0; r < 120; ++r){
            for (int c = 0; c < 70; ++c){
                canvas[r][c] = ' ';
            }
        }

        for (int i = 0; i < line.size(); ++i){
            if (line[i] == 'R'){
                canvas[y][i] = '/';
                maxY = max(maxY, y);
                minY = min(minY, y);
                y++;
            }else if (line[i] == 'F'){
                y--;
                canvas[y][i] = '\\';
                maxY = max(maxY, y);
                minY = min(minY, y);
            }else{
                canvas[y][i] = '_';
                maxY = max(maxY, y);
                minY = min(minY, y);
            }
        }

        for (int i = maxY; i >= minY; i--){
            cout << "| ";
            for (int j = 0; j < line.size(); ++j){
                cout << canvas[i][j];
            }
            cout << endl;
        }
        cout << "+";
        for (int i = 0; i <= line.size() + 1; ++i){
            cout << "-";
        }
        cout << endl;
    }

    return 0;
}