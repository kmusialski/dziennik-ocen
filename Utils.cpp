//
// Created by Piotr on 2015-11-28.
//

#include "Utils.h"
#include "iostream"
#include "sstream"
#include <stdlib.h>
using namespace std;

bool isNumber(string str);

int cinInt(){ // funkcja sprawdzenia poprwanosci strumienia

    string x;
    cin >> x;

    while(!isNumber(x)){
        cout << "Podaj jeszcze raz:";
        cin >> x;
    }

    int result;
    istringstream iss(x);
    iss >> result;
    return result;

}


bool isNumber(string str){
    for (int i = 0; i < str.length(); ++i) {
        if(!isdigit(str[i])){
            return false;
        }
    }
    return true;
}