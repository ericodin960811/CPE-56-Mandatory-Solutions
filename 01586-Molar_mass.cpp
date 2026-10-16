#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <cctype>
using namespace std;

int main(){
    int t;
    string mf;
    map <char, double> mass = {{'C', 12.01}, {'H', 1.008}, {'O', 16.00}, {'N', 14.01}};

    cin >> t;
    
    while (t--){
        double TotalMass = 0.0;
        double TempMass = 0.0; 
        int TempAmount = 0; 

        cin >> mf;

        for (char c : mf){
            if (isalpha(c)){
                if (TempMass > 0.0){
                    if (TempAmount != 0){
                        TotalMass += TempAmount * TempMass;
                    }else{
                        TotalMass += TempMass;
                    }
                }
                
                TempMass = mass[c];
                TempAmount = 0;
            }else if (isdigit(c)){
                TempAmount = TempAmount * 10 + (c - '0');
            }
        }

        if (TempMass > 0.0){
            if (TempAmount != 0){
                TotalMass += TempAmount * TempMass;
            }else{
                TotalMass += TempMass;
            }
        }

        cout << fixed << setprecision(3) << TotalMass << endl;
    }

    return 0;
}