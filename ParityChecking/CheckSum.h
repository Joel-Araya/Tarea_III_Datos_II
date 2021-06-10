//
// Created by joelg on 9/6/2021.
//

#ifndef TAREA_III_DATOS_II_CHECKSUM_H
#define TAREA_III_DATOS_II_CHECKSUM_H
#include <iostream>
#include <string>

using namespace std;

class CheckSum {
private:
    string binaryLetters[50];
    int size;

public:
    CheckSum(string a);
    string toBinary(int n);
    void convertToBinary(string s);
    void addCheckSum();

    string sum(string a, string b);

    string InvertBits(string result);
};



#endif //TAREA_III_DATOS_II_CHECKSUM_H
