#include <iostream>
using namespace std;

int main() {
    int y = 6; 
    int result = ++y + y++; 
    cout << y << " " << result; 
    return 0;
}
