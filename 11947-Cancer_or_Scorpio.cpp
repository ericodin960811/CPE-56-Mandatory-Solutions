#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Zodiac {
    int end_date;
    string name;
};

const Zodiac zodiacs[] = {
    {120, "capricorn"},
    {219, "aquarius"},
    {320, "pisces"},
    {420, "aries"},
    {521, "taurus"},
    {621, "gemini"},
    {722, "cancer"},
    {821, "leo"},
    {923, "virgo"},
    {1023, "libra"},
    {1122, "scorpio"},
    {1222, "sagittarius"}
};

string Months[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int Days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    int n;
    string date;

    cin >> n;

    for (int i = 1; i <= n; ++i){
        cout << i << " ";
        cin >> date;

        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(2, 2));
        int year = stoi(date.substr(4, 4));
        int t = 280;

        while (t--){
            day++;

            bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            int MaxDay = (month == 2 && isLeap) ? 29 : Days[month];

            if (day > MaxDay){
                day = 1;
                month++;

                if (month > 12){
                    month = 1;
                    year++;
                }
            }
        }

        cout << fixed << setw(2) << setfill('0') << month << "/" << setw(2) << setfill('0') << day << "/" << setw(4) << setfill('0') << year;

        int md = month * 100 + day;
        string sign = "capricorn";
        
        for (auto &z : zodiacs){
            if (md <= z.end_date){
                sign = z.name;
                break;
            }
        }
        cout << " " << sign << endl;
    }

    return 0;
}