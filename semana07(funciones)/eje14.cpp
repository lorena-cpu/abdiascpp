#include <iostream>
#include <cmath>
using namespace std;
//se puede nobrar la funcion en la parte superior tambien
float abdias(float);
int main(void){
    float arg=2.0;
    cout<<"the second power of "<<arg<<" is "<<abdias(arg)<<endl;
    return 0;
}
float abdias(float x){
    float result;
    result= x*x;
    return result;
}