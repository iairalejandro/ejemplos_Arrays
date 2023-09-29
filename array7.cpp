#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

int main(){

    const size_t arraySize{5};

    array<int, arraySize> values;

    for(size_t j{0}; j < values.size(); ++j){
        values[j] = 2 + 2  * j;
    }

    cout << "Element" << setw(10) << "Value"  << endl;

    for(size_t i{0}; i < values.size(); ++i) {
        cout << setw(7) << i << setw(10) << values[i] << endl;
    }

}