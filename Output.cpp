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
        while (i<Postfix.end()){
            while(*i == ' '&&i<Postfix.end()-1)
                i += 1;
            Temp2 = *i;
            bool IsNumber = true;
              if(!stk.empty()&&Temp2 == "+") {
                   cout<<"Get +"<<endl;  //test
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
                cout<<"Get *"<<endl;  //test
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
                cout<<"Get Numbers"<<endl; //test
//                Temp1.clear();
                Temp1.append(Temp2);
                //stream<<Temp1;
                //stream>>Temp3;
                cout<<"Temp1:"<<Temp1<<endl;
                i += 1;
                Temp2 = *i;
                if(*i == ' ') {
                    stream.clear();
                    stream << Temp1;
                    stream >> Temp3;
                    cout << "Get:" << Temp3 << endl;
                    stk.push(Temp3);
                    Temp1.clear();
                    IsNumber = false;
                }
            }

    }
    Result = stk.top();
}

void Output::Display() {
    cout<<Result<<endl;
}