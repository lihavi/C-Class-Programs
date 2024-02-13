#include <iostream>
using namespace std;
int main(){

    enum newsPaper{Nation,Standard,Taifa,Star};
    newsPaper PaperType;

    PaperType=Taifa;
    PaperType=(newsPaper)3;
   

    cout<<PaperType;



    return 0;

    
}