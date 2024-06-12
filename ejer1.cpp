#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numeros[100][100], filas, columnas;

    cout <<"digite el numero de filas: ";
    cin >>filas;
    cout <<"digite el numero de columnas: ";
    cin >>columnas;

    //rellene la matriz

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout <<"digite un numero["<<i<<"]["<<j<<"]:";
            cin >>numeros[i][j];

        }
       
    }

    cout <<"\nmostrando matriz\n\n";
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout <<numeros[i][j];
            cout <<"|";
        }
       cout <<"\n";
    }
    getch();
    return 0;
}