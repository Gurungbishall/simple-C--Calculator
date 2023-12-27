#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
  {
    float firstvalue,secondvalue;
    char symbol;
    float result;
    cout<<"Enter The Calculation:";
    cin>>firstvalue>>symbol>>secondvalue;
    switch (symbol)
    {
    case '/':
        result=firstvalue/secondvalue;
        break;
    case '*':
        result=firstvalue*secondvalue;
        break;
    case '^':
        result=pow(firstvalue,secondvalue);
        break;
    case '+':
        result=firstvalue+secondvalue;
        break;
    case '-':
        result=firstvalue-secondvalue;
        break;
    default:
        cout<<"Error";
        break;
    }
    cout<<firstvalue<<symbol<<secondvalue<<":"<<result;
    return 0;
  }