//
// Created by joelg on 9/6/2021.
//

#include "CheckSum.h"



CheckSum::CheckSum(string a) {
    size = a.length();
    convertToBinary(a);
    addCheckSum();
}

string CheckSum::toBinary(int n)
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


void CheckSum::convertToBinary(string s){

    for (int i = 0; i < s.length(); ++i) {
        string a = toBinary((int)s[i]);
        cout << a << endl;

        binaryLetters[i] = a;
    }
    cout<<endl;
}

void CheckSum::addCheckSum(){
    string checkSum = "00000000";


    for (int i = 0; i < size; ++i) {
        checkSum = sum(checkSum, binaryLetters[i]);
    }

    cout<<"El resultado es: "<<checkSum<<endl<<endl<<"El checksum es: ";

    checkSum = InvertBits(checkSum);

    cout<<checkSum<<endl;
}

string CheckSum::sum(string a, string b){
    string aux="00000000";

//    cout<<"La suma de "<<a<<" con "<<b<<" es ";

    for (int i = 0; i < a.size(); ++i) {
//        cout<<a[i]<<""<<b[i]<<endl;
        if(a[i]=='1'&& b[i]=='1')
        {
            aux[i] = '0';
        }

        else if((a[i]=='1'&& b[i]=='0') || (a[i]=='0'&& b[i]=='1'))
        {
            aux[i] = '1';
        }

        else if(a[i]=='0'&& b[i]=='0')
        {
            aux[i] = '0';
        }
    }
    cout<<aux<<endl;
    return aux;
}

string CheckSum::InvertBits(string result){
    for (int i = 0; i < result.size(); ++i) {
        if(result[i]=='0'){
            result[i]='1';
        }
        else if(result[i]=='1'){
            result[i]='0';
        }
    }
    return result;
}