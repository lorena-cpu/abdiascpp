#include <iostream>
#include <vector>
using namespace std;
void moverCerosAlFinal(vector<int>& arr) {
    int n = arr.size();
    int contador = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[contador++] = arr[i];
        }
    }
    for (int i = contador; i < n; i++) {
        arr[i] = 0;
    }
}
int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moverCerosAlFinal(arr);
    cout << "Array después de mover los ceros al final: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
