#include <iostream>
#include <string>
using namespace std;

int main() {
    string daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    cout << "Days of the week:" << endl;
    for(int i = 0; i < 7; ++i) {
        cout << i+1 << ". " << daysOfWeek[i] << endl;
    }

    return 0;
}
