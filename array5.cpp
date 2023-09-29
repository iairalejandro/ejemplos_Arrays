#include <iostream>
using namespace std;

int sumar_rec(const int arr[] , const int tam){

    if(tam < 0)
        return 0;
    else
        return arr[tam-1] + sumar_rec(arr, tam-1);

}

void imprimir_rec(const int arr[], int tam) {
    if(tam == 0)
        return;
    imprimir_rec(arr, tam-1);
    cout << arr[tam-1] << " ";
}

int main() {

    int tam = 4;
    int arr[4] = {1 , 2, 3, 4};

    //cout << sumar_rec(arr, 4) << endl;

    imprimir_rec(arr, tam);

    return 0;


}