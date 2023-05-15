#include <iostream>
using namespace std;

int days(int, int);

int main(){
    cout << days(2023, 1) << endl;
}

int days(int year, int month){
    if (month == 2){
        if (year % 100 == 0){
            if (year % 400 == 0){
                return 29;
            }
        }
        else if (year % 4 == 0){
            return 29;
        }
        else{
            return 28;
        }
    }

    else if (month % 2 == 0){
        return 30;
    }
    else{
        return 31;
    }
    return 0;
}