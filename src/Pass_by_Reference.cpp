#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void computeCubes (int& a, int& b, int& c){
  a = a * a * a;
  b = b * b * b;
  c = c * c * c;
}

void passReference(int * a, int * b) {
    *a = pow(*a, *b);
    *b = *a % *b;
}  

int main(){

  int x = 9;
  if (8){
    cout << "8";
  } else{
    cout << x;
  }

  int a1 = 2;
  int b2 = 4;
  int z = a1 / b2;

  cout << z << endl;
  cout << endl;
  
  string ans="";
  int num1 = 4;
  int num2 = 2;
  int num3 = 6;
  
  computeCubes(num1, num2, num3);
  
  cout<< "Value of num1 is: "<< num1 <<endl;
  cout <<"Value of num2 is: " << num2 <<endl;
  cout<<"Value of num3 is: "<< num3<<endl;
}