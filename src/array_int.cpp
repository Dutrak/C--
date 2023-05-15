#include <iostream>
using namespace std;

int main(){
    int a[] = {0, 1, 2};
    int* p = &a[0];
    cout << *p << endl;
    p = p + 1;
    cout << *p << endl;
    cout << endl;

    int a1 = 10;
    int* p2 = &a1;
    cout << *p2 << endl;
    cout << endl;

    // *(p2+1) é a mesma coisa que p2[1] (4 bytes após o valor de p2)
    cout << *(p2 + 1) << endl;
    cout << p2[1] << endl;

    // cuidado: sem o parenteses o compilador entende que eu quero pegar o valor de *p2 e somar 1, retornando 11
    cout << *p2+1 << endl;

}