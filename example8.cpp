//Program to calculate the multiplication of two numbers where num1 is 10 and num2 is 20
#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Please enter two numbers" << endl;
    cin>>num1>>num2;
  if(num1>100)
     if (num2>100)
        cout<<"num1 and num2 are above 100"<<endl;
            else
        cout<<"num2 is not above 100"<<endl;
    
        else
           if(num2<100)
           cout<<"both num1 and num2 are less than 100"<<endl;
           else
           cout<<"num1 is less than 100 but num2 is not"<<endl;


    /* nt product = num1*num2;
    int division = num1/num2;
    int subtraction = num1-num2;
    int modulus = num1%num2; */

   /*  cout << "product is " << product << endl;
    cout << "divison is " << division << endl;
    cout << "subtraction is " << subtraction << endl;
    cout << "modulus is " << modulus << endl;
 */

    return 0;

    
    

}