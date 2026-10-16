#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};

int main(){
    int t, m, n, k;
    cin >> t;

    while (t--){
        cin >> m >> n;

        vector <string> grid(m);
        string line, word, lowerWord;

        for (int i = 0; i < m; ++i){
            cin >> line;
            for (int j = 0; j < n; ++j){
                grid[i] += tolower(line[j]);
            }
        }

        cin >> k;

        for (int i = 0; i < k; ++i){
            lowerWord = "";

            cin >> word;
            for (int j = 0; j < word.size(); ++j){
                lowerWord += tolower(word[j]);
            }

            bool found = false;
            
            for (int r = 0; r < m && !found; ++r){
                for (int c = 0; c < n && !found; ++c){
                    if (grid[r][c] != lowerWord[0]) continue;

                    for (int dir = 0; dir < 8; ++dir){
                        bool match = true;

                        for (int len = 0; len < lowerWord.size(); ++len){
                            int nr = r + len * dx[dir];
                            int nc = c + len * dy[dir];

                            if (nr < 0 || nr >= m || nc < 0 || nc >= n || grid[nr][nc] != lowerWord[len]){
                                match = false;
                                break;
                            }
                        }

                        if (match){
                            cout << r + 1 << " " << c + 1 << endl;
                            found = true;
                            break;
                        }
                    }
                }
            }
        }
    }

    return 0;
}