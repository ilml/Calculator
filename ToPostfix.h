//
// Created by Rainy on 1/22/17.
//

#ifndef CALCULATOR_TOPOSTFIX_H
#define CALCULATOR_TOPOSTFIX_H

#include <stack>
#include <string>

using namespace std;
class ToPostfix {
      public:
            ToPostfix(string Input):Infix(Input){}
            void InfixtoPostfix();
            void Display();
            string ReturnString();
      private:
            string Infix;
            string Postfix;
            stack<string,deque<string> > stk;
};


#endif //CALCULATOR_TOPOSTFIX_H
