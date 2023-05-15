#include <iostream>
using namespace std;

int SumOfElements(int a[], int size){ // int [a] na função é o mesmo que int* a[]
    int sum = 0;
    for (int i=0; i<size; i++){
        sum += a[i];
    }
    return sum;
}

int main(){
    int x[] = {1,2,3,4,5,6,7};
    int size = sizeof(x) / sizeof(x[0]);
    cout << "The sum of elements is: " << SumOfElements(x, size) << endl;
}