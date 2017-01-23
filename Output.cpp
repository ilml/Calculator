//
// Created by Rainy on 1/22/17.
//

#include "Output.h"
#include <iostream>
#include <sstream>

stringstream stream;
string Temp2,Temp1;
double First,Second,TempResult,Temp3;
void Output::Calculate() {
    string::iterator i = Postfix.begin();
        while (*i!='\0'){
            Temp2 = *i;
            bool IsNumber = true;
              if(!stk.empty()&&Temp2 == "+") {
                   First = stk.top();
                   stk.pop();
                   Second = stk.top();
                   stk.pop();
                   TempResult = First + Second;
                   stk.push(TempResult);
                   IsNumber = false;
                   i += 1;
              }


            if(!stk.empty()&&Temp2 == "*") {
                First = stk.top();
                stk.pop();
                Second = stk.top();
                stk.pop();
                TempResult = First * Second;
                stk.push(TempResult);
                IsNumber = false;
                i += 1;
            }

            while(IsNumber){
                Temp1.clear();
                Temp1.append(Temp2);
                i += 1;
                if(*i == '\0')
                    stream<<Temp1;
                    stream>>Temp3;
                    stk.push(Temp3);
                    IsNumber = false;
            }

    }
    Result = stk.top();
}

void Output::Display() {
    cout<<Result<<endl;
}