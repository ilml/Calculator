//
// Created by Rainy on 1/22/17.
//

#include "Input.h"
#include <iostream>

void Input::GetString() {
     cin>>Input;
}



void Input::Check() {
     for(string::iterator i=Input.begin();i<Input.end();++i){
         int Count = 0;
         for(string::iterator j=Symbol.begin();j<Symbol.end();++j){
             if(*i==*j){
                 Count = 1;
                 break;
             }
         }
         if(Count==0){
             cout<<"Input Illegal!"<<endl;
             Input.clear();
         }
     }
}


void Input::Display() {
     cout<<Input<<endl;
}


string Input::ReturnString() {
     return Input;
}
