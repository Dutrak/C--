#include <iostream>
using namespace std;


void printAlfabeto(){
    char alfabeto [27];
    char *p = &alfabeto[0];
    int cont = 0;
    for (int i = 97; i < 123; i++){

        *(p+cont) = i;
        cont++;

         if (cont == 26){
            *(p + cont) = '\0';
            break;
        }
    }
    for (int i = 0; i < 26; i++){
        if (i < 1){
            cout << alfabeto[i];
        }else{
            cout << " " << alfabeto[i];
        }
    }
    cout << endl;
}

int main(){
    //char C [] = "Hello";
    //int len = sizeof(C) / sizeof(char);
    //char *p = &C[0];

    //cout << p[1] << endl;
    //cout << *(p+1) << endl;

    //cout << C << endl;
    //cout << len << endl;


    cout << endl;
    cout << "--------------------ALFABETO-----------------------" << endl;
    cout << "===================================================" << endl;
    printAlfabeto();
    cout << "===================================================" << endl;
    cout << endl;
}