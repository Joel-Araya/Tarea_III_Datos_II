#include <iostream>
#include <string>
#include "ParityChecking/ParityCheckingVRC.h"
#include "ParityChecking/ParityCheckingLRC.h"
#include "ParityChecking/CheckSum.h"

using namespace std;

int main()
{
//    string text;
//    cout << "Ingrese texto: ";
//    getline(cin, text);
//    cout<<endl;

    cout<<endl<<"================================================================================================"<<endl<<"VRC"<<endl<<endl<<endl;
    ParityCheckingVRC parityCheckingVrc =  ParityCheckingVRC("hola");
    cout<<endl<<endl<<endl<<"================================================================================================"<<endl<<"LRC"<<endl<<endl<<endl;
    ParityCheckingLRC parityCheckingLrc =  ParityCheckingLRC("hola");
    cout<<endl<<endl<<endl<<"================================================================================================"<<endl<<"CheckSum"<<endl<<endl<<endl;
    CheckSum checkSum = CheckSum("Hola");

    return 0;
}