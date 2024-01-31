#include<iostream>
#include<string.h>
using namespace std;

int main(){
    float allowance;
    char initial;
    int number;
    string employeeName;
  /*   char employeeName[10]; */

    cout << "Please enter employee name" << endl;
    cin >> employeeName;

    cout << "Please enter initial" << endl;
    cin >> initial;

    cout<<"Please enter  employeenumber and allowance"<<endl;
    cin >> number >> allowance;

    cout<<"Employee name is "<<employeeName << "the initial is "<<initial;
    cout<<"The employee number is "<<number<< "and allowance is "<< allowance;

    return 0;
}