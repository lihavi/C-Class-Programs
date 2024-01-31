//Program to calculate the multiplication of two numbers where num1 is 10 and num2 is 20
#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Please enter two numbers" << endl;
    cin>>num1>>num2;

    int product = num1*num2;
    int division = num1/num2;
    int subtraction = num1-num2;
    int modulus = num1%num2;

    cout << "product is " << product << endl;
    cout << "divison is " << division << endl;
    cout << "subtraction is " << subtraction << endl;
    cout << "modulus is " << modulus << endl;


    return 0;

    
    

}