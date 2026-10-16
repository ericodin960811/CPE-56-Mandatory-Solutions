#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

vector <string> Months = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
vector <int> Days = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    int t;
    string date;
    int k;
    int counter = 0;

    cin >> t;

    while (counter < t){
        string BlankDate;

        cin >> date;
        cin >> k;

        for (char c : date){
            if (c == '-'){
                BlankDate += ' ';
            }else{
                BlankDate += c;
            }
        }

        stringstream ss(BlankDate);
        int y;
        string m_str; 
        int m;
        int d;

        ss >> y >> m_str >> d;

        for (int i = 1; i <= 12; ++i){
                if (Months[i] == m_str){
                    m = i;
                }
            }

        while (k--){
            d++;

            bool isLeap = ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
            int MonthDay = Days[m];
            
            if (m == 2 && isLeap) MonthDay = 29;

            if (d > MonthDay){
                d = 1;
                m++;

                if (m > 12){
                    m = 1;
                    y++;
                }
            }
        }

        counter++;
        cout << "Case " << counter << ": " << y << "-" << Months[m] << "-" << setw(2) << setfill('0') << d << endl;
    }
    

    return 0;
}