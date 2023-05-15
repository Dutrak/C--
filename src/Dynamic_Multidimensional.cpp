#include <iostream>
using namespace std;


//função que printa valores na array
void print (int** matrix, int rows, int cols){
    int cont = 0;
     for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols;  j ++){
            cont++;
            matrix [i][j] = cont;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    // input do usuário
    int rows, cols;
    cout << "rows, cols: ";
    cin >> rows >> cols;

    // cria uma variavel ponteiro que aponta para 3 variaveis ponteiro (linhas)
    int** matrix =  new int *[rows];

    //cada variavel dentro da array matrix, aponta para uma nova array (colunas)
    for (int i = 0; i < rows; i++){
        matrix [i] = new int [cols];
    }

    //printa a array
    cout << "MATRIZ DE " << rows << " POR " << cols << endl;
    print(matrix, rows, cols);

    // Limpa a memoria de trás pra frente
    for (int i = 0; i < rows; i++){
        delete[] matrix [i];
    }
    delete [] matrix;
    matrix = NULL;

}