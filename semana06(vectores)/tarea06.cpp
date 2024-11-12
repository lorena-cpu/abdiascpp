#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> comprimirArray(const vector<int>& arr) {
    set<int> elementosUnicos(arr.begin(), arr.end());
    return vector<int>(elementosUnicos.begin(), elementosUnicos.end());
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> resultado = comprimirArray(arr);

    cout << "Array comprimido sin duplicados: ";
    for (int num : resultado) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
