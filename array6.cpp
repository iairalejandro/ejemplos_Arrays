#include <iostream>
using namespace std;

void imprimir_rec(const int arr[], int tam) {
    if(tam == 0)
        return;
    imprimir_rec(arr, tam-1);
    cout << arr[tam-1] << " ";
}

void invertir(int arr[], int tam){
    for(int i = 0; i < tam/2; i++){
        int tmp = arr[i];
        arr[i] = arr[tam-i-1];
        arr[tam-i-1] = tmp;
    }
}

void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

/*
void invertir_inter(int arr[], int tam){
    for(int i = 0; i < tam/2; i++){
        intercambio(arr[i], arr[tam-i-1]);
    }
}
*/

void invertir_rec(int arr[], int tam, int i = 0){
    if(i > tam)
        return;
    intercambio(arr[i], arr[tam-1]);
    invertir_rec(arr, tam-1, i+1);
}

int main(){
    int array[] = {1,2,3,4,5};

    imprimir_rec(array,5);
    //invertir(array,5);
    invertir_rec(array,5);
    cout << endl;
    imprimir_rec(array,5);
    return 0;

}