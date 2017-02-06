//
// Created by Rainy on 1/22/17.
//

/*
 Algorithm:  + * ()   - -> +     / -> *
 1 操作数输出，操作符入栈
 2 比栈顶优先级高则入栈，否则弹出栈顶，直到满足条件
 3 (直接入栈，直到遇到），弹出直到（。
 4 无操作数，全部出栈


判断：  字符OR数字-》空栈？
 */

#include "ToPostfix.h"
#include "Symbol.h"
#include <iostream>



string Temp;


void ToPostfix::InfixtoPostfix()  {
     //for(string::iterator i=infix.begin();i<infix.end();++i){
         // int isnumber= 0;
         // for(string::iterator j=symbol.begin();j<symbol.end();++j){
               //if(*i==*j) {
                   //if (stk.empty())
                     //  stk.push(*i);
                   //else
     string::iterator i = Infix.begin();  //Current Pointer
     while(i < Infix.end()){
                             Temp = *i;
                             bool IsNumber = true ;

                             if(Temp == "*") {
                                   while (!stk.empty() && stk.top() == "*") {
                                     Postfix.append(stk.top());
                                     stk.pop();  //Put it out of stack
                                 }
                                   if (stk.empty())
                                     stk.push("*");
                                   if (stk.top() == "+" || stk.top() == "("){  //Unuseful???
                                     stk.push("*");        //Put it into Stack
                                    // cout<<"Get *"<<endl;
                                   }
                                   i += 1;
                                   IsNumber = false;
                             }


                             if(Temp == "+"){

                               while (!stk.empty()&&(stk.top() == "*" || stk.top() == "+")) {
                                     Postfix.append(stk.top());
                                     stk.pop();  //Put it out of stack
                                 }
                               if (stk.empty())
                                   stk.push("+");
                                   //cout<<"Get +"<<endl;//test
                               if (!stk.empty() && stk.top() == "(")  //Unuseful???
                                   stk.push("+");
                               i+=1;
                               IsNumber = false;
                             }


                            if(Temp == "(") {
                               //if (stk.empty())
                                 //  stk.push("(");
                               stk.push("("); //Directly push
                               i+=1;
                               IsNumber = false;
                            }


                             if(Temp == ")") {
                                 while (!stk.empty() && stk.top() != "(") {
                                     Postfix.append(stk.top());
                                     stk.pop();  //Put it out of stack
                                 }
                                 stk.pop();
                                 i += 1;
                                 IsNumber = false;
                             }

                                 while (IsNumber) {
                                     Temp = *i;
                                     Postfix.append(Temp);
                                     /*
                                     if(Temp==".") {
                                         Postfix.pop_back();
                                         Postfix.append(Temp);


                                     }
                                     else
                                         Postfix.append(" "+Temp+" ");
                                         */
                                     //cout<<"Get Number!"<<endl; //test
                                     i += 1;
                                     if(i==Infix.end()){
                                         Postfix.append(" ");
                                         IsNumber = false;
                                     }
                                     else {
                                         for (string::iterator j = Symbol.begin(); j < Symbol.end(); ++j) {
                                             if (*i == *j) {
                                                 Postfix.append(" ");
                                                 IsNumber = false;
                                                 break;
                                             }
                                         }
                                     }
                                 }
         cout<<"One Loop"<<endl; //test
                             }


     //All pop
     while(!stk.empty()){
         Postfix.append(stk.top());
         stk.pop();
     }

}


void ToPostfix::Display() {
    cout<<Postfix<<endl;
}

string ToPostfix::ReturnString() {
    return Postfix;
}

