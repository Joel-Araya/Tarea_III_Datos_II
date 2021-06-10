//
// Created by joelg on 9/6/2021.
//

#ifndef TAREA_III_DATOS_II_PARITYCHECKINGLRC_H
#define TAREA_III_DATOS_II_PARITYCHECKINGLRC_H
#include <iostream>
#include <string>

using namespace std;

class ParityCheckingLRC {
private:
    string binaryLetters[50];
    int size;

public:
    ParityCheckingLRC(string a);
    string toBinary(int n);
    void convertToBinary(string s);
    void addParity();

    int countOnes(string a);
};


#endif //TAREA_III_DATOS_II_PARITYCHECKINGLRC_H
