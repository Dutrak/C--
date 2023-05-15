#include <iostream>
using namespace std;

void printArray();
void makeArray();
void printPascalTr(int);

int main()
{
    printPascalTr(5);
}

void printArray(){
    int tArr[5][5];
    int num = 1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tArr[i][j] = num;
            cout << tArr[i][j] << " ";
            num++;
        }
        cout << "\n";
    }
}

void makeArray(){
    int matrix [5][5];
    for (int i = 0; i < 5; i++){
       for (int j = 0; j < 5; j++)
       if (i == j){
           matrix[i][j] = 0;
       }
       else if (i > j){
           matrix [i][j] = -1;
       }
        else if (i < j){
            matrix [i][j] = 1;
        }
   }

   for (int i = 0; i < 5; i++){
       for (int j = 0; j < 5; j++){
           cout << matrix[i][j] << " ";
       }
       cout << "\n";
   }
}

void printPascalTr(int size) {
  int matrix [size][size];

    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (i == j){
                matrix [i][j] = 1;
            }
              if (i > 0){
                matrix[i][0] = 1;
            }
        }
    }

  for (int i = 0; i < size; i++){
    for (int j = 1; j < size; j++){
      if (i > j){
        matrix [i][j] = matrix [i-1][j] + matrix [i-1][j-1];
      }
    }
  }

  for (int i = 0; i < size; i++){
    for (int j = 0; j <= i; j++){
      cout << matrix[i][j] << " ";
    }
    cout << "\n";
  }
}