#include<iostream>
#include<string>
using namespace std;
int main () {
        string mi_nombre = "Abdias";
        string Encriptador = "  ";
        for( char letra : mi_nombre ) {
            Encriptador += char(letra + 6);
        }

        cout<<"mi nombre encriptado es:"<<Encriptador << endl;


    return 0;
}