#include <iostream>
using namespace std;
#define LENGHT 10

    int main()  {
    int idades[LENGHT];
    int sort[LENGHT];

    for(int i = 0; i < LENGHT; i++) {
        cout << "Digite os valores: ";
        cin >> idades[i]; }

    copy(idades, idades + LENGHT, sort);

    for(int j = 0; j < LENGHT; j++) {
    for(int i = 0; i < LENGHT - 1; i++){
    
        if(sort[i] < idades[i+1]){
        sort[i] = idades[i+1];
        sort[i+1] = idades[i];
        copy(sort, sort + LENGHT, idades);
        }}}

    for(int i = 0; i < LENGHT; i++){
        cout << sort[i] << endl;
    }
    return 0;
    }

   
