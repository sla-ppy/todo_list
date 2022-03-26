#include <iostream>

int main() {
    std::cout << "[Todo List] - [v0.1]" << '\n';
    std::cout << "\n";

    std::cout << "Select your option(1-4): :" << '\n';
    std::cout << "1. Check tasks" << '\n';
    std::cout << "2. Add task" << '\n';
    std::cout << "3. Remove task" << '\n';
    std::cout << "4. Quit program" << '\n';

    int menuChoice{0};
    std::cin >> menuChoice;
    if (menuChoice == 1) {

    } else if (menuChoice == 2) {

    } else if (menuChoice == 3) {

    }
    else if (menuChoice == 4) {
        return -1;
    } else {
        std::cout << "Select a valid option." << '\n';
    }

    return 0;
}
