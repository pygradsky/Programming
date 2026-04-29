#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(NULL)));

    int randomNum = rand();

    int rangeNum = 1 + rand() % 100;

    std::cout << "Случайное число: " << rangeNum << std::endl;
    return 0;
}
