//
// Created by Rainy on 1/22/17.
//

#ifndef CALCULATOR_INPUT_H
#define CALCULATOR_INPUT_H



#include "Symbol.h"
using namespace std;


class Input {
    public:
        void GetString();
        void Check();
        void Display();
        string ReturnString();
    private:
        string Input;

};


#endif //CALCULATOR_INPUT_H
