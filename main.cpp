#include "Input.h"
#include "Symbol.h"
#include <stack>
#include "ToPostfix.h"
#include "Output.h"
#include <sstream>
#include <iostream>
using namespace std;
int main() {


     /*
      //* String Test
      string a = " 12_+";
      stringstream test;
      double b;
       test<<a;
       test>>b;
      std::cout<<b-1;
      */



    //stack<string,deque<string> > stk;
   // stk.pop();
      Input test;
     test.GetString();
     //test.Display();
     //test.Check();

      ToPostfix t1(test.ReturnString());
      t1.InfixtoPostfix();
       t1.Display();
       Output t2(t1.ReturnString());
      t2.Calculate();
      t2.Display();
     // t1.Display();
     //Output o(t1.ReturnString());
     //Output T("2.5 2.5 *");
     //T.Calculate();
     //T.Display();
//     o.Display();
/*

//stack<string,deque<string> > stk;  //stack initialize
    //stack stk;
    /*


     stk.push("=");
     stk.push("+");
     cout<<stk.top()<<endl;
     stk.pop();
     cout<<stk.top()<<endl;



     //string::iterator b=(a.end()-1);
     //cout<<*b<<endl;

    //int a;
    const string a = "-++-1.9()__" ;
    const string::const_iterator i = a.begin();
    cout<<*i;

    string aa;
    aa = a.substr(4);
    cout<<aa<<endl;
    double b = str2num(a);
    double d  = atof(a.c_str());
    double dd;
    stringstream d;
    d<<a;
    d>>dd;
    cout<<dd+1<<endl;
    //a.append(stk.top());
    cout<<a<<endl;
*/


    return 0;
}