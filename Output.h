//
// Created by Rainy on 1/22/17.
//

#ifndef CALCULATOR_OUTPUT_H
#define CALCULATOR_OUTPUT_H


#include <stack>
#include <string>
using namespace std;
class Output {
      public:
            Output(string Input):Postfix(Input){}
            void Calculate();
            void Display();
      private:
            double Result;
            string Postfix;
            stack<double ,deque<double> >  stk;
};


#endif //CALCULATOR_OUTPUT_H
