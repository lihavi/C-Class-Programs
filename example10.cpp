#include <iostream>

int main() {
    int day;

    std::cout << "Enter a number (1-7) to represent the day of the week: ";
    std::cin >> day;

    switch (day) {
        case 1:
            std::cout << "Sunday" << std::endl;
            break;
        case 2:
            std::cout << "Monday" << std::endl;
            break;
        case 3:
            std::cout << "Tuesday" << std::endl;
            break;
        case 4:
            std::cout << "Wednesday" << std::endl;
            break;
        case 5:
            std::cout << "Thursday" << std::endl;
            break;
        case 6:
            std::cout << "Friday" << std::endl;
            break;
        case 7:
            std::cout << "Saturday" << std::endl;
            break;
        default:
            std::cout << "Invalid input! Please enter a number between 1 and 7." << std::endl;
            break;
    }

    return 0;
}
