#include <iostream>
using namespace std;
int main(){
    int num1,num2,choice,result;
    cout << "please enter two numbers" << endl;
    cin>>num1>>num2;
    cout<<"please enter a 1,2,3 or 4 to add, subtract or divide respectively" << endl;
    cin>>choice;
    
    switch (choice)
    {
        case  1: result=num1+num2;
        break;
        case  2: result=num1+num2;
        break;
    
    default:
        break;
    }
}