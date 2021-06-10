//
// Created by joelg on 9/6/2021.
//

#include "ParityCheckingLRC.h"

ParityCheckingLRC::ParityCheckingLRC(string a) {
    size = a.length();
    convertToBinary(a);
    addParity();
}

string ParityCheckingLRC::toBinary(int n)
{
    string aux;
    while (n != 0){

        if(n % 2 == 0){ aux += "0";}
        else { aux += "1";}

        n = n/2;
    }

    while (aux.length()<8){
        aux = "0" + aux;
    }

    return aux;
}


void ParityCheckingLRC::convertToBinary(string s){

    for (int i = 0; i < s.length(); ++i) {
        string a = toBinary((int)s[i]);
        cout << a << endl;

        binaryLetters[i] = a;
    }
    cout<<endl;
}

void ParityCheckingLRC::addParity(){
    string parity = "";


    for (int i = 0; i < binaryLetters[0].size(); ++i) {
        string parityAux = "";

        for(int j = 0; j < size; ++j){
            parityAux += binaryLetters[j][i];
        }

        int aux = countOnes(parityAux)%2;
        parity += to_string(aux);
    }

    cout<<"El LRC es: "<<parity<<endl<<endl<<"El mensaje original con el RLC es: ";
    for (int i = 0; i < size; ++i) {
        cout<<binaryLetters[i]<<"  ";
    }
    cout<<parity<<endl;
}

int ParityCheckingLRC::countOnes(string a){
    int aux=0;
    for (int i = 0; i < a.size(); ++i) {
        if(a[i]=='1'){aux+=1;}
    }

    return aux;
}