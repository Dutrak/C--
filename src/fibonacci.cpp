#include <iostream>
using namespace std;

int main()
{
    int range = 6;
    int num1 = 0, num2 = 1, fibonacci = 0;
    cout << fibonacci << " ";
    cout << num2 << " ";
    fibonacci = num1 + num2;
    cout << fibonacci << " ";

    for (int i = 2; i < range; i++){
        num1 = num2;
        num2 = fibonacci;
        fibonacci = num1 + num2;
        cout << fibonacci << " ";
    }
    cout << "" << endl;
}