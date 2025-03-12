#include <iostream>
#include <string>

std::string getGameOverMessage() {
    return "Game Over!";
}

int main() {
    std::cout << getGameOverMessage() << std::endl;
    return 0;
}

