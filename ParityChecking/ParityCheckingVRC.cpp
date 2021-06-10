//
// Created by joelg on 9/6/2021.
//

#include "ParityCheckingVRC.h"



ParityCheckingVRC::ParityCheckingVRC(string a) {
    size = a.length();
    convertToBinary(a);
    addParity();
}

string ParityCheckingVRC::toBinary(int n)
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


void ParityCheckingVRC::convertToBinary(string s){

    for (int i = 0; i < s.length(); ++i) {
        string a = toBinary((int)s[i]);
        cout << a << "   ";

        binaryLetters[i] = a;
    }
    cout<<endl;
}

void ParityCheckingVRC::addParity(){

    cout<<"\nCon paridad"<<endl;
    for (int i = 0; i < size; ++i) {

        if(countOnes(binaryLetters[i])%2==1){binaryLetters[i] = binaryLetters[i] + "1";}
        else{binaryLetters[i] = binaryLetters[i] + "0";}

        cout<<binaryLetters[i]<<"  ";
    }
    cout<<endl<<endl<<"El VRC es: ";

    for(int i = 0; i < size; ++i){
        cout<<binaryLetters[i][binaryLetters[i].length()-1];
    }

    cout<<endl;

}

int ParityCheckingVRC::countOnes(string a){
    int aux=0;
    for (int i = 0; i < a.size(); ++i) {
        if(a[i]=='1'){aux+=1;}
    }

    return aux;
}